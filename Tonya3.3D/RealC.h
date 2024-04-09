#pragma once
#include "Number.h"
class RealC :
    private Number
{
public:
	RealC() { setFlo(0); };
	RealC(Number f) { setFlo(f.getFlo()); };
	RealC(const RealC& n) { setFlo(n.getFlo()); };
	~RealC() { };

	friend RealC power(const RealC& number, int s);
	friend RealC loga(const RealC& number);

	RealC& operator ++();
	RealC& operator --();
	RealC operator ++(int);
	RealC operator --(int);

	RealC operator=(RealC t);

	friend ostream& operator << (ostream& out, const RealC& r);
	friend istream& operator >> (istream& in, RealC& r);

	operator std::string() const;
};

