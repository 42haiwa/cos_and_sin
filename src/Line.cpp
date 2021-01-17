#include "Line.h"

Line::Line() {
    m_rectangle = sf::RectangleShape{sf::Vector2f{300, 1}};
    m_rectangle.setPosition(1280 / 2, 720 / 2);
}

void Line::update() {
    sf::Time dt = m_clock.restart();

    move(dt);
}

void Line::render(sf::RenderWindow & window) {
    window.draw(m_rectangle);
}

void Line::move(sf::Time dt) {
    m_angle -= -m_angleSpeed * dt.asSeconds();
    m_rectangle.setRotation(m_angle);

    if (m_angle >= 360) m_angle = 0;
}

sf::RectangleShape Line::getShape() const {
    return m_rectangle;
}
