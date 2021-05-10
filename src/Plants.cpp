#include "Plants.h"
#include "windows.h"
#include "iostream"
#include <sstream>

Plants::Plants(){
    Plants::init();
}
void Plants::grow(int hour, sf::RenderWindow &window)
{
    height = height + hour * growth_rate;
    if(height < 1 && height > 0)
    {

        stage = 1;
        plant_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Plant1T.png");
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(36.f, 177.f);
        window.draw(plant_sprite);
    }
    else if(height < 2 && height > 1)
    {
        stage = 2;
        plant_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Plant2T.png");
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(26.f, 173.f);
        window.draw(plant_sprite);
    }
    else if(height < 3 && height > 2)
    {
        stage = 3;
        plant_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Plant3T.png");
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(26.f, 164.f);
        window.draw(plant_sprite);
    }
    else if(height > 3)
    {
        stage = 4;
        plant_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Plant4T.png");
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(24.f, 120.f);
        window.draw(plant_sprite);
    }
}

double Plants::getHeight()
{
    return height;
}

void Plants::init(){
    plant_sprite.scale(0.35f,0.35f);
}