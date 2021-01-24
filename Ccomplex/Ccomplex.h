#pragma once
#include<numeric>
#include <iostream>

class Ccomplex
{
public:
	Ccomplex();
	Ccomplex(double RealNumber, double ImagNumber);

	~Ccomplex();

	Ccomplex& operator*=(Ccomplex& other);
	Ccomplex operator / (const Ccomplex& other);

	double Imag();
	double Real();
private:
	double RealNumber;
	double ImagNumber;
	
};