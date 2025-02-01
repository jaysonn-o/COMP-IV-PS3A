// "Copyright [2024] <Jason Ossai>"
#include "CelestialBody.hpp"
#include <string>
CelestialBody::CelestialBody() {}

void CelestialBody::setPositionInWindow(double conversionFactor) {
    double pixelX = x * conversionFactor + 400;
    double pixelY = -y * conversionFactor + 300;
    sprite.setPosition(static_cast<float>(pixelX), static_cast<float>(pixelY));
}
sf::Vector2f CelestialBody::getSpritePosition() const {
    return sprite.getPosition();
}

double CelestialBody::getX() const {
    return x;
}

double CelestialBody::getY() const {
    return y;
}

double CelestialBody::getMass() const {
    return mass;
}

std::istream& operator>>(std::istream& in, CelestialBody& body) {
    std::string filename;
    in >> body.x >> body.y >> body.xvel >> body.yvel >> body.mass >> filename;
    body.texture.loadFromFile(filename);
    body.sprite.setTexture(body.texture);
    return in;
}

std::ostream& operator<<(std::ostream& out, const CelestialBody& body) {
    out << body.x << " " << body.y << " " << body.xvel << " " << body.yvel << " " << body.mass;
    return out;
}

void CelestialBody::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(sprite, states);
}
