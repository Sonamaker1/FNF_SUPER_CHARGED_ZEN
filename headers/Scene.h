#ifndef SCENE_H
#define SCENE_H

#include "std.h"
#include "Render.h"

// simulating haxeflixel classes in a way!
#define Scene_MakeSceneCode(s, set, init, update, draw, destroy) void set(){\
    RayGame_ClearScene();\
    RayScene_Create(&s, (RaySceneFunctions) {\
        .instantiateFunc = init,\
        .updateFunc = update,\
        .drawFunc = draw,\
        .destroyFunc = destroy\
    });\
    game.scene = &s;\
}\

typedef struct RayScene RayScene; 

typedef void (*InstantiateSceneFunction) ();
typedef void (*DrawSceneFunction) ();
typedef void (*UpdateSceneFunction) ();
typedef void (*DestroySceneFunction) ();

typedef struct {
    InstantiateSceneFunction instantiateFunc;
    DrawSceneFunction        drawFunc;
    UpdateSceneFunction      updateFunc;
    DestroySceneFunction     destroyFunc; 
} RaySceneFunctions;

struct RayScene { 
    RaySceneFunctions functions;
};

void RayScene_Create(RayScene* scene, RaySceneFunctions functions);
void RayScene_Destroy(RayScene* scene);

#endif
