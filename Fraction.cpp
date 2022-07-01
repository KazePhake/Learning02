#include <iostream>
#include "Fraction.h"

void inpFr(Fraction& fr)
{
	std::cin >> fr.nume;
	do std::cin >> fr.deno;
	while (fr.deno == 0);
}

void inpFr(Fraction* fr)
{
	std::cin >> fr->nume;
	do std::cin >> fr->deno;
	while (fr->deno == 0);
}

int findGN(int x, int y)
{
	int GN;
	x = abs(x);
	y = abs(y);
	if (x == 0 || y == 0) GN = x + y;
	else
	{
		while (x != y)
		{
			if (x > y) x -= y;
			else y -= x;
		}
		GN = x;
	}
	return GN;
}