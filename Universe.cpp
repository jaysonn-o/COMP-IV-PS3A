// "Copyright [2024] <Jason Ossai>"
#include "Universe.hpp"

Universe::Universe() : num_planets(0), universe_radius(2.50e+11) {
    bodies.resize(num_planets);
}

double Universe::getUniverseRadius() const {
    return universe_radius;
}

std::vector<CelestialBody>& Universe::getBodies() {
    return bodies;
}

std::istream& operator>>(std::istream& in, Universe& universe) {
    in >> universe.num_planets >> universe.universe_radius;
    universe.bodies.resize(universe.num_planets);
    for (int i = 0; i < universe.num_planets; ++i) {
        in >> universe.bodies[i];
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Universe& universe) {
    out << universe.num_planets << " " << universe.universe_radius << "\n";
    for (const auto& body : universe.bodies) {
        out << body << "\n";
    }
    return out;
}

void Universe::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    for (const auto& body : bodies) {
        target.draw(body, states);
    }
}
