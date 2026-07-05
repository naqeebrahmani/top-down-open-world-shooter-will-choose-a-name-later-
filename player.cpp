#include <raylib.h>
#include "player.h"
#include <cmath>
#include <iostream>


Player::Player(float x_pos, float y_pos)
{
    x = x_pos;
    y = y_pos;
    
}

void Player::Draw(){
    DrawTexturePro(testsprite, framerec, Rectangle{x, y, 32*4, 32*4}, {64, 64}, rotation, WHITE);
}

void Player::InitSprites(Image testimage){
    image = testimage;
    //ImageResizeNN(&image, image.width*4, image.height*4);
    this->testsprite = LoadTextureFromImage(image);
}

void Player::FaceMouse(){
    Vector2 mousepos = GetMousePosition();
    float hypotenuse = sqrt(pow((x - mousepos.x), 2) + pow((y - mousepos.y), 2));

    if(mousepos.x > x && mousepos.y > y){
        float oppositecathetus = y - mousepos.y;

        rotation = ((asin(oppositecathetus/hypotenuse) * (180/3.14))) * -1; // converting to degree because asin (arcsin) returns the value in radiansi

    }
    else if(mousepos.x < x && mousepos.y > y){
        float oppositecathetus = x - mousepos.x;
        rotation = ((asin(oppositecathetus/hypotenuse) * (180/3.14)) + 90);

    }
    else if(mousepos.x < x && mousepos.y < y){ 
        float oppositecathetus = x - mousepos.x;

        rotation = ((asin(oppositecathetus/hypotenuse) * (180/3.14)) + 180);

    }
    else if(mousepos.x < x && mousepos.y > y){
        float oppositecathetus = mousepos.y - y;

        rotation = ((asin(oppositecathetus/hypotenuse) * (180/3.14)) + 270) *-1;

    }










    

}