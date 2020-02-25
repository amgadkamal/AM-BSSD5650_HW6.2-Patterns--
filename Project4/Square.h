#pragma once
#ifndef Square_h
#define Sqaue_h

#include <iostream>
#include "Draw.h"

class Sqaure :public Draw {
public:
	void draw() override { std::cout << "Sqaure::draw()" << std::endl; };

};


#endif // 
