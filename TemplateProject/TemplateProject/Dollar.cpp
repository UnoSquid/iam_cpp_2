#include "Dollar.h"
#include <ostream>
#include <sstream>
#include <iomanip>

//CONSTRUCTORS
Dollar::Dollar(void)
{
	value = 0;
}

Dollar::Dollar(double newValue){
	value = newValue;
}


//DESTRUKTOR
Dollar::~Dollar(void)
{
}


//OPERATOR OVERLOAD
std::ostream& operator << (std::ostream &os, Dollar &outValue){
	std::ostringstream oss;
	oss << "$" << std::fixed << std::setprecision(2) << outValue.value;
	os << oss.str();
	return os;
}
