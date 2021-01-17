#include "Representation.h"

Representation::Representation(int value) : m_value(value) {
    m_circle = sf::CircleShape{20};
    m_circle.setFillColor(sf::Color::White);

    if (m_value == SIN_V) {
        m_position = sf::Vector2f{1000, 720 / 2};
    } else {
        m_position = sf::Vector2f{1280 / 2 + 300, 680};
    }

    m_circle.setPosition(m_position);
}

void Representation::update(sf::RectangleShape const & rectangle) {
    if (m_value == SIN_V) {
        float y = sinf(rectangle.getRotation() * M_PI / 180) * 300;
        y += 720 / 2;
        m_position.y = y;
    } else {
        float x = cosf(rectangle.getRotation() * M_PI / 180) * 300;
        x += 1280 / 2;
        m_position.x = x;
    }

    m_circle.setPosition(m_position);
}

void Representation::render(sf::RenderWindow & window) {
    window.draw(m_circle);
}
