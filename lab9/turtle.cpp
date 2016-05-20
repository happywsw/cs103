#include <cmath>
#include "turtle.h"




Turtle::Turtle(double x0, double y0, double dir0){
	newx0 = x0;
	newy0 = y0;
	newdir0 = dir0;
	ninjavanish = true;
	
}

void Turtle::move(double dist){
	double tempx0, tempy0;

	tempx0 = newx0;
	tempy0 = newy0;

	newx0 += dist*cos((newdir0*M_PI)/180);
	newy0 += dist*sin((newdir0*M_PI)/180);

	if (ninjavanish == true){
	draw::setcolor(mycolor);
    draw::line(tempx0, tempy0, newx0, newy0);
	}
}



void Turtle::turn(double deg){
	newdir0+=deg;
}

void Turtle::on(){
	ninjavanish = true;

}


void Turtle::off(){
	ninjavanish = false;
}

void Turtle::setColor(Color C){
	mycolor = C;

}