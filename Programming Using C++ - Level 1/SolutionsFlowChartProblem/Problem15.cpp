/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem15.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 17:21:56 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 17:33:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &from,int &to,int &age)
{
	cout << "entre rang from :";
	cin >> from;
	cout << "to :";
	cin >> to;
	cout << "so entre the age :";
	cin >> age;
}

bool ValidatAge(int from,int to, int age)
{
	return (bool)(age >= from && age <= to);
}

void Print(bool res)
{
	if(res == 1)
		cout << "\nYou're Age is Accepted.\n";
	else
		cout << "\n You Didn't Accepted.\n";
}

int main()
{
	int from,to,age;
	ReadNumber(from,to,age);
	Print(ValidatAge(from,to,age));
}
