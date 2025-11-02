/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   grade.cpp                                              |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 10:51:55 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 11:03:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadGrade(int &grade)
{
	cout << "please entre you're Grade :\n";
	cin >> grade;
}

void PrintGrade(int grade)
{
	if (grade >= 90 && grade <= 100)
		cout << "you're grade is A.\n";
	else if(grade >= 80 && grade <= 89)
		cout << "you're garde is B.\n";
	else if (grade >= 70 && grade <= 79)
		cout << "you're grade is C.\n";
	else if(grade >=60 && grade <= 69)
		cout << "you're garde is D.\n";
	else if(grade >= 50 && grade <= 59)
		cout << "you're grade is E.\n";
	else
		cout << "you're grade is F.\n";
}

int main()
{
	int Grade;
	ReadGrade(Grade);
	PrintGrade(Grade);

	return 0;
}
