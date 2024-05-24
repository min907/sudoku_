
#include<SDL.h>
#include<SDL_image.h>
#include<iostream>

#include "Eelement.hpp"
#include "Math.hpp"

Eelement::Eelement(Vector2f pos, float pWidth, float pHeight, SDL_Texture* tex)
    :position(pos), texture(tex)
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 1200;
    currentFrame.h = 1200;
    width = pWidth;
    height = pHeight;
}

Vector2f& Eelement::getPosition()
{
    return position;
}

SDL_Texture* Eelement::getTexture()
{
    return texture;
}

SDL_Rect Eelement::getCurrentFrame()
{
    return currentFrame;
}

float Eelement::getWidth()
{
    return width;
}

float Eelement::getHeight()
{
    return height;
}

void Eelement::setPosition(float pX, float pY)
{
    position.x = pX;
    position.y = pY;
}

void Eelement::setWidth(float pWidth)
{
    width = pWidth;
}

void Eelement::setHeight(float pHeight)
{
    height = pHeight;
}

