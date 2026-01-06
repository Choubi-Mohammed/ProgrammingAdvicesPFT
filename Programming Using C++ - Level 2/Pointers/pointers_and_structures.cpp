/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pointers_and_structures.cpp                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/06 12:17:46 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/06 12:51:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

struct stEmp
{
	string fullNmae;
	int age;
	int salary;
};

int main()
{
	stEmp employee,*ptr;

	employee.fullNmae = "Mohammed Choubi";
	employee.age = 22;
	employee.salary = 3000;

	cout << "fullNmae = " << employee.fullNmae << endl;
	cout << "age = " << employee.age << endl;
	cout << "salary = " << employee.salary << endl;

	ptr = &employee;
	ptr->fullNmae = "test";
	ptr->age = 23;
	(*ptr).salary = 5000;
	cout << "fullNmae = " << ptr->fullNmae<< endl;
	cout << "age = " << (*ptr).age<< endl;
	cout << "salary = " << (*ptr).salary<< endl;

	return 0;
}
