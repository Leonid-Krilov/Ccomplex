#include "Ccomplex.h"

Ccomplex::Ccomplex()
{
}

Ccomplex::Ccomplex(double RealNumber, double ImagNumber)
{
	this->RealNumber = RealNumber;
	this->ImagNumber = ImagNumber;
}

double Ccomplex::Imag()
{
	return ImagNumber;
}

double Ccomplex::Real()
{
	return RealNumber;
}

Ccomplex::~Ccomplex()
{
}

Ccomplex& Ccomplex::operator*=(Ccomplex& other)
{
	auto Buff_RealNumber = RealNumber * other.RealNumber - ImagNumber * other.ImagNumber;
	auto Buff_ImagNumber = RealNumber * other.RealNumber + ImagNumber * other.ImagNumber;

	this->ImagNumber = Buff_ImagNumber;
	this->RealNumber = Buff_RealNumber;

	return *this;
}

Ccomplex Ccomplex::operator/(const Ccomplex& other)
{
	auto k = (pow(other.RealNumber, 2) + pow(other.ImagNumber, 2));

	return Ccomplex(((RealNumber * other.RealNumber + ImagNumber * other.ImagNumber) / k)
		, ((ImagNumber * other.RealNumber - RealNumber * other.ImagNumber) / k));
}
