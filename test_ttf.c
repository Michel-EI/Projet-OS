#include <SDL.h>
#include <SDL_ttf.h>
#include <stdio.h>

int main(void)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("SDL_Init error: %s\n", SDL_GetError());
        return 1;
    }

    if (TTF_Init() != 0)
    {
        printf("TTF_Init error: %s\n", TTF_GetError());
        return 1;
    }

    printf("Avant ouverture police\n");
    TTF_Font* font = TTF_OpenFont("sans.ttf", 15);
    if (!font)
    {
        printf("Erreur TTF_OpenFont : %s\n", TTF_GetError());
    }
    else
    {
        printf("Police chargée correctement\n");
        TTF_CloseFont(font);
    }

    TTF_Quit();
    SDL_Quit();
    return 0;
}

