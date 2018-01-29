//  Copyright (c) 2018 Antoine & Jules
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
double exo1(double rayon)
{
	double aire;
	aire = 3.14 * rayon * rayon;
	return aire;
}
void exo2 (short a, short b)
{
	short y;
		y = a < b && !a;
}
double exo3(double rayon)
{
	double aire;
	aire = 4.0/3.0 * 3.14 * pow (rayon, 3);
	return aire;
}
#endif
