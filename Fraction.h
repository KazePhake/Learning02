#pragma once

struct Fraction
{
	int nume, deno;
};

void inputFr(Fraction&);
void inputFr(Fraction*);
int findGN(int, int);
void mnmFr(Fraction&);
void mnmFr(Fraction*);
void outpFr(Fraction);
Fraction findLrg(Fraction, Fraction);
Fraction addFr(Fraction, Fraction);
Fraction subFr(Fraction, Fraction);
Fraction multFr(Fraction, Fraction);
Fraction dvdFr(Fraction, Fraction);