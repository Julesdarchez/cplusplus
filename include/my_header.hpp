//  Copyright (c) 2018 Antoine & Jules
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>


void exo1(void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
#endif
}
void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}

int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}

void exo3(void)
{
	int p = 0;
	int n = 0;
	while (essayer_code(n) != 1 ){
		n = n + 1;
	}
std:n;
}

unsigned short lancer_de();
{
	srand(time(NULL));
	return (rand() % 6) + 1;
}

void exo4(void)
{
	int joueur1 = 0;
	int joueur2 = 0;
	int tour = 0;
	int point = 0;
	while (joueur1 <= 50 && joueur2 <= 50)
		int x = lancer_de();
		while (x != 1);
		if (x % 2 == 0)
			point = point + x;
		if (x==3)
			point = point * 2
		



}

