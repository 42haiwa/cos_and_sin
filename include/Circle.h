#ifndef __CIRCLE__H__
#define __CIRCLE__H__

#include <SFML/Graphics.hpp>

class Circle {
    private:
        sf::CircleShape m_circle;
        
    public:
        Circle();
        void update();
        void render(sf::RenderWindow & window);
};

#endif
