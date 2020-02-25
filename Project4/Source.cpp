#include <iostream>
#include "Circle.h"
#include "Square.h"
#include"Rectangle.h"
#include "Draw.h"



int main() {
	
	Draw* square ;
	Draw* circle;
	Draw* rectangle;

	//get the shapes 
	square = new Sqaure();
	circle = new Circle();
	rectangle = new Rectangle();

	//draw the shapes
    square->draw();
	circle->draw();
	rectangle->draw();
    	
}