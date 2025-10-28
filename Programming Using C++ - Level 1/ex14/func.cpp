/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   func.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/28 19:45:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/28 20:11:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

void tt_cadrInfo()
{
	string fullName,City,Country;
	int age;
	cout << "please entre full name :";
	getline(cin, fullName);
	cout << "please enter you age :";
	cin >> age;
	cout << "plesae entre your City :";
	cin >> City;
	cout << "please entre you Country :";
	cin >> Country;;
	cout << "*******************************************\n";
	cout << "Full Name : " << fullName << endl;
	cout << "Your Age : " << age << endl;
	cout << "Your city : " << City << endl;
	cout << "Your country : " << Country << endl;
	cout << "*******************************************\n";
}

void tt_starts()
{
	cout << "********************\n";
}

void tt_h()
{
	cout << "*          *\n";
	cout << "*          *\n";
	cout << "*          *\n";
	cout << "************\n";
	cout << "*          *\n";
	cout << "*          *\n";
	cout << "*          *\n";
}
int main()
{
	tt_cadrInfo();
	cout << endl;
	tt_starts();
	tt_starts();
	tt_starts();
	tt_starts();
	tt_starts();
	cout << endl;
	tt_h();
}
