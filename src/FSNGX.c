#include <FSNGX.h>
#include <stdio.h>
#include <SDL3/SDL.h>

void printSuma(int a, int b) {
    int x = a + b;
    printf("%d\n", x);
}

void testSDL(){
    SDL_Init(SDL_INIT_VIDEO);
    printf("SDL\n");
    SDL_Quit();
}
