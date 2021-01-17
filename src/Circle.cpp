#include "Circle.h"

Circle::Circle() {
    m_circle = sf::CircleShape{300};
    m_circle.setFillColor(sf::Color::Transparent);
    m_circle.setOutlineThickness(1);
    m_circle.setOutlineColor(sf::Color::White);
    m_circle.setOrigin(m_circle.getLocalBounds().width / 2, m_circle.getLocalBounds().height / 2);
    m_circle.setPosition(1280 / 2, 720 / 2);
}

void Circle::update() {
}

void Circle::render(sf::RenderWindow & window) {
    window.draw(m_circle);
}
