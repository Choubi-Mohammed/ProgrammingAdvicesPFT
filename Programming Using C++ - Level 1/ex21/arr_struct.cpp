/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   arr_struct.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 10:40:05 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 11:03:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct stPersone{
	string fullName;
	int Age;
	string Phone;
	string City;
};
void ReadDataOnePer(stPersone &Per)
{
	cout << "please entre you're Full name :\n";
	cin >> Per.fullName;
	cout << "please entre you're age :\n";
	cin >> Per.Age;
	cout << "please entre you're phone number :\n";
	cin >> Per.Phone;
	cout << "please entre you're City :\n";
	cin >> Per.City;
}
void ReadDataArr(stPersone Per[])
{
	ReadDataOnePer(Per[0]);
	ReadDataOnePer(Per[1]);
}
void PrintDataOnePer(stPersone Per)
{
	cout << "\n**************************************\n";
	cout << "Full Name : " << Per.fullName << endl;
	cout << "Age : " << Per.Age << endl;
	cout << "Phone : " << Per.Phone << endl;
	cout << "City : " << Per.City << endl;
	cout << "***************************************\n";
}
void PrintDataArr(stPersone Per[])
{
	PrintDataOnePer(Per[0]);
	PrintDataOnePer(Per[1]);
}


int main()
{
	stPersone Per[2];
	ReadDataArr(Per);
	PrintDataArr(Per);
}
