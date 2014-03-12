//MAIN FUNCTION --- oh yeah!

#include <iostream>
#include <iomanip>

#include "Money.h"
#include "Account.h"
#include "Pound.h"
#include "Dollar.h"
#include "Zorkmid.h"

using namespace std;

int main(){
	char pleaseStopClosingAutomatically;	//I'm not getting the "press any key to close" message anymore.

	Money<Dollar> PurseD(9.95);
	Money<Pound> PurseP(Pound(2,5,6));
	Money<Zorkmid> PurseZ(42);
	Account account;

	cout << "Amount of Dollars:  " << PurseP.value << endl;
	cout << "Amount of Pounds:   " << PurseD.value << endl;
	cout << "Amount of Zorkmids: " << PurseZ.value << endl;

	cout << "\nExchange Rates: $" << (char)26 << "Z: " << cout.width(4) << account.DtZExchangeRate;
	cout << "   " << (char)156 << (char)26 << "Z: " << cout.width(4) << account.PtZExchangeRate << endl;

	account += PurseD.value;
	account += PurseP.value;
	account += PurseZ.value;

	cout << "\nThese total to a value of " << std::setprecision(2) << account.value << " Zorkmids." << endl;

	cin >> pleaseStopClosingAutomatically;
	return 0;
}