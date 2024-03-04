#include "Shapes.h"


AABBox::AABBox() {
	xMin = 0;
	yMin = 0;
	width = 0;
	height = 0;
}
AABBox::AABBox(vec::Vector position, vec::Vector size) {
	xMin = position.getX();
	yMin = position.getY();
	width = size.getX();
	height = size.getY();
}
float AABBox::getXMin() { return xMin; }
float AABBox::getYMin() { return yMin; }
float AABBox::getWidth() { return width; }
float AABBox::getHeight() { return height; }


vec::Vector AABBox::getPosition() { return vec::Vector(xMin, yMin); }

void AABBox::setPosition(vec::Vector position){
	xMin = position.getX();
	yMin = position.getY();
}
vec::Vector AABBox::getSize(){return vec::Vector(width, height);}


namespace sh {
	vec::Vector Shape::getPosition() { return vec::Vector(boundingBox.getPosition()); }
	void Shape::setPosition(vec::Vector position) { 
		boundingBox.setPosition(position);
		//Room for Changing the origin and centre with setPosition
	}
	//vec::Vector Shape::getCentre() { return centre; }

	AABBox Shape::getBounds(){
		return boundingBox;
	}



	//Rectangle
	RectangleShape::RectangleShape() {
		boundingBox = AABBox();
	}

	RectangleShape::RectangleShape(vec::Vector position, vec::Vector size) {
		boundingBox = AABBox(position, size);
	}

	void RectangleShape::rotate(float angle) {
		//TODO
	}

	sf::Shape* RectangleShape::getSFMLShape() {
		sf::RectangleShape rect = sf::RectangleShape(sf::Vector2f(getPosition().getX(), getPosition().getY()));
		rect.setSize(sf::Vector2f(boundingBox.getSize().getX(), boundingBox.getSize().getY()));
		rect.setFillColor(sf::Color::Blue);
		rect.setOutlineColor(sf::Color::Yellow);
		rect.setOutlineThickness(2);
		return &rect;
	}

	//Circle
	CircleShape::CircleShape() {
		boundingBox = AABBox();
	}

	CircleShape::CircleShape(vec::Vector position, float radius) {
		boundingBox = AABBox(position, vec::Vector(radius * 2, radius * 2));
		this->radius = radius;
	}

	void CircleShape::rotate(float angle) {
		//TODO
	}

	sf::Shape* CircleShape::getSFMLShape() {
		sf::CircleShape circle;
		return &circle;
	}
}