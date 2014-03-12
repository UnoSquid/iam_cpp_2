#pragma once

#include <ostream>

class Dollar
{
public:
	Dollar(void);
	Dollar(double);
	~Dollar(void);

	friend std::ostream& operator << (std::ostream&, Dollar&);	//Formatting!

	double value;	//Hooray for floating point imprecision!
};

