

#pragma once

#include<SDL.h>
#include<SDL_image.h>

#include "Math.hpp"
#include "Small_square.hpp"

class Mouse
{
public:
    Mouse();
    int getX();
    int getY();
    Vector2f getPos();
    bool isInsideEelement(Eelement& element);
private:
    int x, y;
};
