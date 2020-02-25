#ifndef Circle_h
#define Circle_h

#include <iostream>
#include "Draw.h"

class Circle :public Draw {
public:
	void draw() override { std::cout << "Circle::draw()" << std::endl; };

};


#endif // 

