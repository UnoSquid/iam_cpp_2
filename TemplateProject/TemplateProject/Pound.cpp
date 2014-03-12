#include "Pound.h"

#include <ostream>
#include <sstream>

//CONSTRUCTORS
Pound::Pound(void)
{
	value = 0;
}

Pound::Pound(int l, int s, int d){
	if ((l < 0) || ((l==0)&&(s<0)) || ((l==0)&&(s==0)&&(d<0))) {	//If leading number is negative, all values assumed negative
		value = -1 * ((std::abs(l) * 240) + (std::abs(s) * 12) + std::abs(d));
	}
	else {
		value = (l * 240) + (s * 12) + d;
	}
}

//DESTRUKTOR
Pound::~Pound(void)
{
}

//OPERATOR OVERLOADS
std::ostream& operator << (std::ostream &os, Pound &outValue){
	std::ostringstream oss;
	if(outValue.value >= 0){
		oss << (char)156 << outValue.Pounds() << "," << outValue.Shillings() << "s" << outValue.Pence() << "d";
	}
	else {
		oss << "(" << (char)156 << -outValue.Pounds() << "," << -outValue.Shillings() << "s" << -outValue.Pence() << "d)";
	}
	os << oss.str();
	return os;
}

Pound& Pound::operator = (const Pound &newValue){
	value = newValue.value;
	return *this;
}

//Money& operator = (const std::string&);

Pound& Pound::operator += (const Pound &operand){
	value += operand.value;
	return *this;
}

Pound Pound::operator + (const Pound &operand) {
	Pound tempValue;
	tempValue.value = value + operand.value;
	return tempValue;
}

Pound& Pound::operator -= (const Pound &operand){
	value -= operand.value;
	return *this;
}

Pound Pound::operator - (const Pound &operand){
	Pound tempValue;
	tempValue.value = value - operand.value;
	return tempValue;
}

Pound& Pound::operator *= (const float &operand){
	value *= operand;
	return *this;
}

Pound Pound::operator * (const float &operand){
	Pound tempValue;
	tempValue.value = value * operand;
	return tempValue;
}

Pound Pound::operator / (const float &operand){
	Pound tempValue;
	tempValue.value = value / operand;
	return tempValue;
}

int Pound::operator / (const Pound &operand){
	return (value / operand.value);
}

bool Pound::operator < (const Pound &operand){
	return (value < operand.value);
}

bool Pound::operator > (const Pound &operand){
	return (value > operand.value);
}

bool Pound::operator <= (const Pound &operand){
	return (value <= operand.value);
}

bool Pound::operator >= (const Pound &operand){
	return (value >= operand.value);
}


//METHODS
int Pound::Pounds(){
	return value / 240;
}

int Pound::Shillings(){
	int temp;
	temp = value % 240;
	return temp / 12;
}

int Pound::Pence(){
	return value % 12;
}