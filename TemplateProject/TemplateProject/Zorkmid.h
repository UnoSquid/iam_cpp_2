#pragma once

#include <ostream>

class Zorkmid
{
public:
	Zorkmid(void);
	Zorkmid(int);
	~Zorkmid(void);

	friend std::ostream& operator << (std::ostream&, Zorkmid&);	//Formatting!

	int value;
};

