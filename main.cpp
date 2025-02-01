// "Copyright [2024] <Jason Ossai>"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Universe.hpp"
int main() {
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Universe");

    // Load universe data
    Universe universe;
    std::cin >> universe;

    // Compute the conversion factor
    double conversionFactor = WINDOW_WIDTH / (2.0 * universe.getUniverseRadius());

    // Set the position of each celestial body
    for (auto& body : universe.getBodies()) {
        body.setPositionInWindow(conversionFactor);
    }

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Draw the universe
        window.draw(universe);

        window.display();
    }

    return 0;
}
