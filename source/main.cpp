#include <stdlib.h>
#include <time.h>
#include "Game.h"

int main(int argc, char** args)
{
    Game *game;
    if(game->init())
    {
        srand (time(NULL));
        while(!game->finished())
        {
            game->handleEvents();
            game->logic();
            game->changeState();
            game->render();
        }
    }
    game->quit();
    return 0;
}
