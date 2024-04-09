#include "Number.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Number Number::operator=(Number t) {
	flo = t.flo;
	return *this;
}

ostream& operator << (ostream& out, const Number& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Number& r)
{
	cout << endl;
	cout << "float = ? "; in >> r.flo;
	return in;
}

Number operator+(const Number& that, const Number& other)
{
	Number result;
	float sum = that.flo + other.getFlo();
	result.setFlo(sum);
	return result;

}

Number operator/(const Number& that, const Number& other)
{
	Number result;
	float division = that.flo / other.getFlo();
	result.setFlo(division);
	return result;
}

Number::operator std::string() const {
	stringstream sout;
	sout << "Float: " << getFlo();
	return sout.str();
}

Number& Number::operator ++() {
	++flo;
	return *this;
}

Number& Number::operator --() {
	--flo;
	return *this;
}

Number Number::operator ++(int) {
	Number n(*this);
	flo++;
	return n;
}

Number Number::operator --(int) {
	Number n(*this);
	flo--;
	return n;
}