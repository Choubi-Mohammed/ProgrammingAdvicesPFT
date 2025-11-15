/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem22.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/15 11:39:52 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/15 11:53:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &base,int &exp)
{
	cout << "please entre base :";
	cin >> base;
	cout << "please entre exponent :";
	cin >> exp;
}

void power_while(int base, int exp)
{
	int pow = 1;
	int counter = 1;
	cout << "\nusing while loop\n";
	cout << base << "^" << exp << " = ";
	while(counter <= exp)
	{
		pow = pow *base;
		counter++;
	}
	cout << pow << endl;
}

void power_for(int base ,int exp)
{
	int pow = 1;
	cout << "\nusing for loop\n";
	cout << base << "^" << exp << " = " ;
	for(int i =1;i<= exp;i++)
	{
		pow = base * pow;
	}
	cout << pow << endl;
}

void power_dowhile(int base,int exp)
{
	cout << "\nusing do while loop\n";
	cout << base << "^" << exp << " = ";
	int counter = 1;
	int pow = 1;
	do{
		pow= base *pow;
		counter++;
	}while(counter <= exp);

	cout << pow << endl;
}

int main()
{
	int base,exp;
	ReadNumber(base,exp);
	power_while(base,exp);
	power_for(base,exp);
	power_dowhile(base,exp);



	return 0;
}
