#pragma once

#include "Dollar.h"
#include "Pound.h"
#include "Zorkmid.h"

class Account
{
public:
	Account(void);
	Account(double, float, float);
	~Account(void);

	double value;

	float PtZExchangeRate;
	float DtZExchangeRate;

	Account& operator += (const Dollar&);
	Account& operator += (Pound&);
	Account& operator += (const Zorkmid&);

};

