#ifndef __LINE__H__
#define __LINE__H__

#include <SFML/Graphics.hpp>

class Line {
    private:
        sf::RectangleShape m_rectangle;
        sf::Clock m_clock;

        float m_angle{0.f};

        static constexpr float m_angleSpeed{200.f};

    public:
        Line();
        void update();
        void render(sf::RenderWindow & window);
        void move(sf::Time dt);
        sf::RectangleShape getShape() const;
};

#endif
