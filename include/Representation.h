#ifndef __REPRESENTATION__H__
#define __REPRESENTATION__H__

#include <SFML/Graphics.hpp>
#include <cmath>
#include "constants.h"

class Representation {
    private:
        sf::CircleShape m_circle;
        sf::Vector2f m_position;

        int m_value;

    public:
        Representation(int value);
        void update(sf::RectangleShape const & rectangle);
        void render(sf::RenderWindow & window);
};

#endif
