#pragma once
#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
#include "Draw.h"

class Rectangle :public Draw {
public:
	void draw() override { std::cout << "Rectangle::draw()" << std::endl; };

};


#endif // 
