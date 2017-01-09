#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

    struct GameEngine_Data {
        int window_x;
        int window_y;
        int window_width;
        int window_height;
        
        SDL_Window *window;
        SDL_Renderer *renderer;
        
        bool isRunning;


    };
    
    void GameEngine_Init();



#ifdef __cplusplus
}
#endif

#endif /* GAMEENGINE_H */

