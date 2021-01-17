#include <SFML/Graphics.hpp>
#include "Circle.h"
#include "Line.h"
#include "Representation.h"
#include "constants.h"

int main(void) {
	sf::RenderWindow window{sf::VideoMode{1280, 720}, "Math"};
	auto circle = Circle{};
	auto line = Line{};
	auto sinRepresentation = Representation{SIN_V};
	auto cosRepresentation = Representation{COS_V};

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			switch (event.type) {
				case sf::Event::Closed:
					window.close();
					break;
				
				case sf::Event::KeyReleased:
					if (event.key.code == sf::Keyboard::Escape) {
						window.close();
					}
					break;

				default:
					break;
			}
		}
		window.clear();

		circle.update();
		circle.render(window);
		line.update();
		line.render(window);
		sinRepresentation.update(line.getShape());
		sinRepresentation.render(window);
		cosRepresentation.update(line.getShape());
		cosRepresentation.render(window);

		window.display();
	}

	return 0;
}
