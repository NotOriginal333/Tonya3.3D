#pragma once
#include "Number.h"
class RealO :
    public Number
{
public:
	RealO() { setFlo(0); };
	RealO(Number f) { setFlo(f.getFlo()); };
	RealO(const RealO& n) { setFlo(n.getFlo()); };
	~RealO() { };

	friend RealO power(const RealO& number, int s);
	friend RealO loga(const RealO& number);

	RealO& operator ++();
	RealO& operator --();
	RealO operator ++(int);
	RealO operator --(int);

	RealO operator=(RealO t);

	operator std::string() const;
};

