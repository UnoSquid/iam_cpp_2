#include "Zorkmid.h"
#include <ostream>
#include <sstream>

//CONSTRUCTORS
Zorkmid::Zorkmid(void)
{
}

Zorkmid::Zorkmid(int newValue){
	value = newValue;
}


//DESTRUKTOR
Zorkmid::~Zorkmid(void)
{
}


//OPERATOR OVERLOAD
std::ostream& operator << (std::ostream &os, Zorkmid &outValue){
	std::ostringstream oss;
	oss << "Z" << outValue.value;
	os << oss.str();
	return os;
}