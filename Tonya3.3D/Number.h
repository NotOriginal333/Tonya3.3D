#pragma once
#include <string>

using namespace std;

class Number
{
	float flo;
public:
	Number() : flo(0) {};
	Number(float f) : flo(f) {};
	Number(const Number& n) : flo(n.flo) {};
	~Number() { };


	friend Number operator+(const Number&, const Number&);
	friend Number operator/(const Number&, const Number&);

	void setFlo(float flo) { this->flo = flo; }
	float getFlo() const { return flo; };

	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);

	Number operator=(Number t);

	friend ostream& operator << (ostream& out, const Number& r);
	friend istream& operator >> (istream& in, Number& r);

	operator std::string() const;
};
