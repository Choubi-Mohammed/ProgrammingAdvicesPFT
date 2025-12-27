/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   home_work_vector_of_struct.cpp                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 17:28:03 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 17:55:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

struct stEmpl
{
	string firstName;
	string lastName;
	int salary;
};

stEmpl ReadEmpl()
{
	stEmpl Empl;
	cout << "Enter first name of employee : ";
	cin >> Empl.firstName;

	cout << "Enter last name of employee : ";
	cin >> Empl.lastName;

	cout << "Enter the salary of employee : ";
	cin >> Empl.salary;

	return Empl;
}

void vAdd_empl(vector <stEmpl> &vEmpl)
{
	char Res = 'y';
	while(Res == 'Y' || Res == 'y')
	{
		stEmpl tmpEmpl = ReadEmpl();
		vEmpl.push_back(tmpEmpl);
		cout << "\nDo you want to add more ? y/n : ";
		cin >> Res;
	}
}

void PrintVectors(vector <stEmpl> vEmpl)
{
	cout << "Employees : \n\n";
	for(stEmpl &tmpEmpl:vEmpl)
	{
		cout << "firstName : " << tmpEmpl.firstName << endl
			 << "lastName  : " << tmpEmpl.lastName << endl
			 << "salary    : " << tmpEmpl.salary << endl << endl;
	}
}

int main()
{
	vector <stEmpl> vEmpl;
	vAdd_empl(vEmpl);
	PrintVectors(vEmpl);

	return 0;
}
