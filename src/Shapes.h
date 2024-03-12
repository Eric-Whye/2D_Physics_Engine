#pragma once
#include "Vector.h"
#include <iostream>

//Replciates a Axis-aligned Bounding Box
struct AABBox {
private:
	float xMin;//(Top) Left X 
	float yMin;//Top (Left) Y
	float width;//xMin + width = xMax
	float height;//yMin + height = yMax
	vec::Vector setSize();

public:
	AABBox();
	AABBox(vec::Vector position, vec::Vector size);
	float getXMin();
	float getYMin();
	float getWidth();
	float getHeight();
	vec::Vector getPosition();
	void setPosition(vec::Vector position);
	vec::Vector getSize();
};


namespace sh {
	enum ShapeType {
		Rectangle,
		Circle,
		Convex
	};

	class Shape {
	protected:
		//vec::Vector origin;
		//vec::Vector centre;
		//float rotation;
	public:
		AABBox boundingBox;
		vec::Vector getPosition();
		void setPosition(vec::Vector position);

		//vec::Vector getOrigin();
		//void setOrigin();

		//vec::Vector getCentre();
		

		virtual void rotate(float angle) = 0;

		//AABBox of shape
		AABBox getBounds();


		virtual ShapeType getShapeType() = 0;
	};




	class RectangleShape : public sh::Shape {
	public:
		RectangleShape();
		RectangleShape(vec::Vector position, vec::Vector size);
		//RectangleShape(vec::Vector position, float rotation);

		void rotate(float angle);

		ShapeType getShapeType();
	};


	class CircleShape : public sh::Shape {
		float radius;
	public:
		CircleShape();
		CircleShape(vec::Vector position, float radius);
		//RectangleShape(vec::Vector position, float rotation);

		void rotate(float angle);

		ShapeType getShapeType();
	};
}