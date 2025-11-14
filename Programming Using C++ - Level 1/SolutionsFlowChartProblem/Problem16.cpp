/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem16.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 17:38:13 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 17:52:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadUntilValidatedAge(int &from,int &to,int &age)
{
	cout << "entre rang from => ";
	cin >> from;
	cout << " to => ";
	cin >> to;

	do{
		cout << "entre you're age :";
		cin >> age;
	}while(age <= from || age >= to);
}

void Print(int age)
{
	cout << "so you;re age is " << age << endl;
}

int main()
{
	int from,to,age;
	ReadUntilValidatedAge(from,to,age);
	Print(age);

	return 0;
}
