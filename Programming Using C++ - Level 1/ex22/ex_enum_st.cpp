/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   ex_enum_st.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 17:28:13 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 17:48:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


enum enScreenCountry {Morocco = 1,Spain = 2,Frence = 3,Egypt = 4,USA = 5,UAI = 6,Other = 7};

void ReadData(int &Number)
{
	cout << "*********************\n";
	cout << "(1) - Morocco.\n";
	cout << "(2) - Spain.\n";
	cout << "(3) - Frence.\n";
	cout << "(4) - Egypt.\n";
	cout << "(5) - USA.\n";
	cout << "(6) - UAI.\n";
	cout << "(7) - Other.\n";
	cout << "*********************\n";
	cout << "Please entre you're choice ?\n";
	cin >> Number;
}

void PrintData(int Number)
{
	enScreenCountry Country;
	Country = (enScreenCountry) Number;
	if(Country == enScreenCountry::Morocco)
		cout << "Ohh! So you're from Morocco, Nice to Meet you.\n";
	else if(Country == enScreenCountry::Spain)
		cout << "Ohh! So you're from Spain, Nice to Meet you.\n";
	else if(Country == enScreenCountry::Frence)
		cout << "Ohh! So you're from Frence, Nice to Meet you.\n";
	else if(Country == enScreenCountry::Egypt)
		cout << "Ohh! So you're from Egypt, Nice to Meet you.\n";
	else if(Country == enScreenCountry::USA)
		cout << "Ohh! So you're from USA, Nice to Meet you.\n";
	else if(Country == enScreenCountry::UAI)
		cout << "Ohh! So you're from UAI, Nice to Meet you.\n";
	else if(Country == enScreenCountry::Other)
		cout << "Nice to Meet you.\n";
	else{
		cout << "Wrong Number. Try Again!\n";
		ReadData(Number);
		PrintData(Number);
	}

}

int main()
{
	int Number;
	ReadData(Number);
	PrintData(Number);
}
