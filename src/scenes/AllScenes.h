#ifndef TESTSCENE_H
#define TESTSCENE_H

#include "GameData.h"
#include "BeatManager.h"

void PlayState_SetScene();
void PlayState_SetSong(char* song);
void OptionsMenu_SetScene();
void Freeplay_SetScene(); 
void MenuState_SetScene(); 
void TitleState_SetScene(); 

extern Vector2 VECTOR_ZERO;
extern Font mainFont;  

void AllScenes_StartGame();
void AllScenes_DestroyGame();

// cache 
RayAnimationHandler Cache_GetNoteAnimations();

#endif