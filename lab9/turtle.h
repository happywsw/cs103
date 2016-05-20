#include <iostream>
#include "draw.h"

class Turtle {

public:
	
	Turtle(double, double, double);
	void move(double);
	void turn(double);
	void setColor(Color c);
	void off();
	void on();

private:
	double newx0;
	double newy0;
	double newdir0;
	bool ninjavanish;
	Color mycolor;
};