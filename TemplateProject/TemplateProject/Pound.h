#pragma once

#include <string>
#include <ostream>

class Pound
{
public:
	Pound(void);
	Pound(int, int, int);
	~Pound(void);

	friend std::ostream& operator << (std::ostream&, Pound&);
	Pound& operator = (const Pound&);
	Pound& operator += (const Pound&);
	Pound operator + (const Pound&);
	Pound& operator -= (const Pound&);
	Pound operator - (const Pound&);
	Pound& operator *= (const float&);
	Pound operator * (const float&);
	Pound operator / (const float&);
	int operator / (const Pound&);

	bool operator < (const Pound&);
	bool operator > (const Pound&);
	bool operator <= (const Pound&);
	bool operator >= (const Pound&);

	int Pounds();
	int Shillings();
	int Pence();

private:
	int value;
};
