#include "RealO.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

RealO power(const RealO& number, int s)
{
	RealO result;
	float power = pow(number.getFlo(), s);
	result.setFlo(power);
	return result;
}
RealO loga(const RealO& number)
{
	RealO result;
	float logic = log(number.getFlo());
	result.setFlo(logic);
	return result;
}

RealO::operator std::string() const
{
	stringstream sout;
	sout << "Float: " << getFlo();
	return sout.str();
}

RealO& RealO::operator ++() {
	setFlo(getFlo() + 1);
	return *this;
}

RealO& RealO::operator --() {
	setFlo(getFlo() - 1);
	return *this;
}

RealO RealO::operator ++(int) {
	RealO n(*this);
	setFlo(getFlo() +1 );
	return n;
}

RealO RealO::operator --(int) {
	RealO n(*this);
	setFlo(getFlo() - 1);
	return n;
}

RealO RealO::operator=(RealO t) {
	setFlo(t.getFlo());
	return *this;
}