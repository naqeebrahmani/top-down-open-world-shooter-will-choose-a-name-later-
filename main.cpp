#include <raylib.h>
#include "player.h"

const int SCREENWIDTH = 1280;
const int SCREENHEIGHT = 720;
const int FPS = 60;

Texture2D testsprite = LoadTexture("assets/test_sprite.png");



int main(){

    InitWindow(SCREENWIDTH, SCREENHEIGHT, "prototype");
    SetTargetFPS(FPS);



    //game loop//

    while(!WindowShouldClose()){

    BeginDrawing();

    ClearBackground(RED);

    EndDrawing();





    }





    return 0;
}