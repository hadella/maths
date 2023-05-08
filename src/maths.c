/**
 * \file maths.c
 * \author Justin Hadella (justin.hadella@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2023-05-08
 * 
 * \copyright Copyright (c) 2023 Justin Hadella
 */
#include <math.h>

#include "maths.h"

int
lcm(int u, int v)
{
	u = abs(u);
	v = abs(v);

	return u * (v / gcd(u, v));
}

int
gcd(int u, int v)
{
	unsigned int tmp;

	u = abs(u);
	v = abs(v);

	while (v != 0) {
		tmp = u % v;
		u = v;
		v = tmp;
	}

	return u;
}

int
nlm(int u, int v)
{
	u = abs(u);
	v = abs(v);

	return u + v - u % v;
}

unsigned long int
tri(unsigned int n)
{
	return n * (n + 1) / 2;
}