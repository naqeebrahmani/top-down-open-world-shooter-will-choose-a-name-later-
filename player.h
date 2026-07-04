#include <raylib.h>

class Player{
    private:
        float x; float y;
        float rotation = 0;

        Image image;
        Texture2D testsprite;

    public:
        Player(float x_pos, float y_pos);

        void InitSprites(Image testimage);

        void Draw();

        void FaceMouse();




};