/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   vector_of_struct.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 17:01:16 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 17:14:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

struct stEmpolye
{
	string firstName;
	string lastName;
	int salary;
};

int main()
{
	vector <stEmpolye> vEmpl;
	stEmpolye tmpEmpl;
	tmpEmpl.firstName = "Mohameed";
	tmpEmpl.lastName = "choubi";
	tmpEmpl.salary = 6000;
	vEmpl.push_back(tmpEmpl);

	tmpEmpl.firstName = "Adbullah";
	tmpEmpl.lastName = "choubi";
	tmpEmpl.salary = 9000;
	vEmpl.push_back(tmpEmpl);
	for(stEmpolye emp: vEmpl)
	{
		cout << "\nfirstName : " << emp.firstName << endl
			 << "lastName  : " << emp.lastName << endl
			 << "salary    : " << emp.salary << endl;
	}
	return 0;
}
