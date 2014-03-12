#include "Account.h"

#include "Dollar.h"
#include "Pound.h"
#include "Zorkmid.h"


//CONSTRUCTORS
Account::Account(void)
{
	value = 0;
	DtZExchangeRate = 2.2f;
	PtZExchangeRate = 0.7f;
}

Account::Account(double startingValue, float DtZ, float PtZ){
	value = startingValue;
	DtZExchangeRate = DtZ;
	PtZExchangeRate = PtZ;
}


//DESTRUKTOR
Account::~Account(void)
{
}


//OPERATOR OVERLOADS
Account& Account::operator += (const Dollar &operand){
	value += operand.value * DtZExchangeRate;
	return *this;
}

Account& Account::operator += (Pound &operand){
	double tempValue;
	tempValue = (operand.Pounds() * 240) + (operand.Shillings() * 12) + operand.Pence();	//AARRG! at constant functions
	tempValue = tempValue / 240;
	value += tempValue * PtZExchangeRate;
	return *this;
}
	
Account& Account::operator += (const Zorkmid& operand){
	value += (int)operand.value;
	return *this;
}
