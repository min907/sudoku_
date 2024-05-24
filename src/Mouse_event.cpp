
#include "Mouse_event.hpp"

Mouse::Mouse()
{
    SDL_GetMouseState(&x, &y);
}

int Mouse::getX()
{
    SDL_GetMouseState(&x, &y);
    return x;
}

int Mouse::getY()
{
    SDL_GetMouseState(&x, &y);
    return y;
}

Vector2f Mouse::getPos()
{
    SDL_GetMouseState(&x, &y);
    return Vector2f(x, y);
}

bool Mouse::isInsideEelement(Eelement& element)
{
    Vector2f currentPos = getPos();
    return
    (currentPos.x >= element.getPosition().x && currentPos.x <= element.getPosition().x + element.getWidth()
    && currentPos.y >= element.getPosition().y && currentPos.y <= element.getPosition().y + element.getHeight());
}

