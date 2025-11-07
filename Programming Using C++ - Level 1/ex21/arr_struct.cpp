/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   arr_struct.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 10:40:05 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/07 17:41:19 by shobeedev            tfaaty fi l3oolaa   */
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
void ReadDataArr(stPersone Per[],int &len)
{
	cout << "please entre len of arr do you went ? ";
	cin >> len;
	for(int i=0;i <= len -1;i++)
	{
		ReadDataOnePer(Per[i]);
	}
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
void PrintDataArr(stPersone Per[],int len)
{
	for(int i = 0;i <= len-1;i++)
	{
		PrintDataOnePer(Per[i]);
	}
}


int main()
{
	int len;
	stPersone Per[5];
	ReadDataArr(Per,len);
	PrintDataArr(Per,len);
}
