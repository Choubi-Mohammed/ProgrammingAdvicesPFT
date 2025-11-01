/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   struct_func.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 18:15:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 09:29:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct stinfo{
	string firstName;
	string lastName;
	int age;
	char Gender;
	string City;
	string Country;
	string phoneNbr;
};

struct stwork{
	string Company;
	int monthSalary;
};

struct CardInfo{
	stinfo info;
	stwork work;
};
void ReadInfo(CardInfo &Per)
{
	cout << "please entre firstName and lastName :\n";
	cin >> Per.info.firstName;
	cin >> Per.info.lastName;
	cout << "please enter you're age :\n";
	cin >> Per.info.age;
	cout << "please entre Gender :\n";
	cin >> Per.info.Gender;
	cout << "please entre you City and you Country :\n";
	cin >> Per.info.City;
	cin >> Per.info.Country;
	cout << "please entre you phone number :\n";
	cin >> Per.info.phoneNbr;
	cout << "please entre you work company :\n";
	cin >> Per.work.Company;
	cout << "please entre your month Salary :\n";
	cin >> Per.work.monthSalary;
}

void PrintInfo(CardInfo Per)
{
	cout << "\n***********************************************************************************\n";
	cout << "firstName and lastName : " << Per.info.firstName << " " << Per.info.lastName << endl;
	cout << "Age : " << Per.info.age << endl;
	cout << "Gender : " << Per.info.Gender << endl;
	cout << "City : " << Per.info.City << endl;
	cout << "Country : " << Per.info.Country <<  endl;
	cout << "Phone Number : " << Per.info.phoneNbr << endl;
	cout << "Work Company : " << Per.work.Company << endl;
	cout << "Month Salary : " << Per.work.monthSalary << endl;
	cout << "Yearly Salary : " << Per.work.monthSalary * 12 << endl;
	cout << "************************************************************************************\n";

}
int main()
{
	CardInfo Persone1;
	ReadInfo(Persone1);
	PrintInfo(Persone1);

	return 0;
}
