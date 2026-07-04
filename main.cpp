#include <raylib.h>
#include "player.h"




const int SCREENWIDTH = 1280;
const int SCREENHEIGHT = 720;
const int FPS = 120;


Player player(500, 300);


int main(){
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(SCREENWIDTH, SCREENHEIGHT, "prototype");
    SetTargetFPS(FPS);

    Image testspriteimage = LoadImage("assets/test_sprite.png");
    Texture2D testsprite = LoadTextureFromImage(testspriteimage);
    player.InitSprites(testspriteimage);


    //game loop//

    while(!WindowShouldClose()){


        player.FaceMouse();




        //DRAWING//
        BeginDrawing();

        ClearBackground(RED);

        

        player.Draw();


        DrawRectangle(GetMouseX()-5, GetMouseY()-5, 10, 10, BLUE);

        EndDrawing();


    }





    return 0;
}