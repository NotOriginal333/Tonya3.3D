#include "RealC.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

RealC power(const RealC& number, int s)
{
	RealC result;
	float power = pow(number.getFlo(), s);
	result.setFlo(power);
	return result;
}
RealC loga(const RealC& number)
{
	RealC result;
	float logic = log(number.getFlo());
	result.setFlo(logic);
	return result;
}

RealC::operator std::string() const
{
	stringstream sout;
	sout << "Float: " << getFlo();
	return sout.str();
}

RealC& RealC::operator ++() {
	setFlo(getFlo() + 1);
	return *this;
}

RealC& RealC::operator --() {
	setFlo(getFlo() - 1);
	return *this;
}

RealC RealC::operator ++(int) {
	RealC n(*this);
	setFlo(getFlo() + 1);
	return n;
}

RealC RealC::operator --(int) {
	RealC n(*this);
	setFlo(getFlo() - 1);
	return n;
}

RealC RealC::operator=(RealC t) {
	setFlo(t.getFlo());
	return *this;
}

ostream& operator << (ostream& out, const RealC& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, RealC& r)
{
	float f;
	cout << endl;
	cout << "float = ? "; in >> f;
	r.setFlo(f);
	return in;
}