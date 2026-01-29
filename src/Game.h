#ifndef GAME_H
#define GAME_H

#include "std.h"
#include "Scene.h"

#define GLSL_VERSION 330

typedef struct RayGame RayGame;

extern RayGame game;
extern Music gameMusic;

struct RayGame{ 
    RayScene* scene; 
};

void RayGame_Start(const char* gameTitle);
void RayGame_GameLoop();
void RayGame_Destroy();
void RayGame_ClearScene();
void RayGame_SetFPS();
void RayGame_SetVsync(char on);

float RayGame_DeltaTime();
 
float RayGame_ZoomFactor();
int RayGame_WindowHeight();
int RayGame_WindowWidth();
int RayGame_GetTargetFPS();

void RayGame_SetMusic(const char* path, float volume, char looping);
void RayGame_ToggleMusic(char on);
void RayGame_ResetMusic();
void RayGame_ClearMusic();
#endif