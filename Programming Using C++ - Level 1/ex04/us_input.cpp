/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   us_input.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 10:27:56 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 11:02:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	cout << "ex00 \n";
	string Name;
	int Age;
	string City;
	string Country;
	float monthSalary;
	char Gender;
	bool Married;
	cin >> Name;
	cin >> Age;
	cin >> City;
	cin >> Country;
	cin >> monthSalary;
	cin >> Gender;
	cin >> Married;

	cout << "*******************************\n";
	cout << "Name :" << Name << endl;
	cout << "Age :" << Age << endl;
	cout << "City :" << City << endl;
	cout << "Country :" << Country << endl;
	cout << "Monthly Salary :" << monthSalary << endl;
	cout << "Yearly Salary :" << monthSalary *12 << endl;
	cout << "Gender :" << Gender << endl;
	cout << "Married :" << Married << endl;
	cout << "********************************`\n";

	cout << "ex01 \n";
	int n1;
	int n2;
	int n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cout << "Total Numbers = " << n1+n2+n3 << endl;


	cout << "ex02\n";
	int age;
	cin >> age;
	cout << "After 5 years you will be " << age + 5 << " years old.\n";
}
