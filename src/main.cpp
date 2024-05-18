#include <SFML/Graphics.hpp>
using namespace sf;
#include "Obstacle.h"

int main() {
    auto window = sf::RenderWindow{{VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height}, "Runner",Style::Fullscreen };
    window.setFramerateLimit(144);

    Obstacle obstacles[9];



    while (window.isOpen()) {
        for (auto event = sf::Event{}; window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        if (Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            // quit...
            // Someone closed the window- bye
            window.close();
        }

        window.clear();

        window.draw(obstacles[0].getShape());


        window.display();
    }
}
