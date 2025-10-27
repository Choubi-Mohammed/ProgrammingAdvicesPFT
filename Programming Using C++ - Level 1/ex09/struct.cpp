/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   struct.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 11:55:14 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 12:14:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct setinfo{
	string fullName;
	int Age;
	char Gender;
	string Adresse;
};

struct setwork{
	string company;
	string fonction;
	int salary;
};

struct setcar{
	string brand;
	string model;
	int years;
};

struct Person {
	setinfo info;
	setwork work;
	setcar car;
};

int main()
{
	Person p1;

	p1.info.fullName = "Mohammed Choubi\n";
	p1.info.Age = 21;
	p1.info.Gender = 'M';
	p1.info.Adresse = "DR Eddachra El Kelaa des Srghna\n";

	p1.work.company = "Adspace\n";
	p1.work.fonction = "Web Devloper\n";
	p1.work.salary = 5000;

	p1.car.brand = "BMW\n";
	p1.car.model = "G5\n";
	p1.car.years = 2020;

	cout << "************************************\n";
	cout << "Full Name : " << p1.info.fullName;
	cout << "Age : " << p1.info.Age << endl;
	cout << "Adresse : " << p1.info.Adresse;
	cout << "Salary : " << p1.work.salary << endl;
	cout << "Car Brand : " << p1.car.brand;
	cout << "************************************\n";


}
