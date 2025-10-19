/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   var_ex.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 09:40:24 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 10:13:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	cout << "ex00\n";
	string Name = "Mohammed choubi\n";
	int Age = 21;
	string City = "Kelaa des sraghna\n";
	string Country = "Morocco\n";
	int monthSalary = 6000;
	int yearSalary = monthSalary * 12;
	char Gender = 'M';
	bool Married = true;
	cout << "********************************\n";
	cout << "Name :"+Name;
	cout << "Age :" << Age << endl;
	cout << "City :"+City;
	cout << "Country :"+Country;
	cout << "Month Salary :" << monthSalary << endl;
	cout << "Yearly Salary :" << yearSalary << endl;
	cout << "Gender :" << Gender << endl;
	cout << "Married :" << Married << endl;
	cout << "********************************\n\n";

	cout << "ex01\n";
	int n1 = 20;
	int n2 = 30;
	int n3 = 10;
	int totalNbrs = n1+n2+n3;
	cout << n1 << " +\n";
	cout << n2 << " +\n";
	cout << n3 << endl << endl;
	cout << "-----------------------\n\n";
	cout << "Total Numbers = " << totalNbrs << endl ;

	cout << "ex02\n";
	int Age1 = 25;
	cout << "After 5 Years you will be "<< Age1 + 5<< " years old.\n";



}
