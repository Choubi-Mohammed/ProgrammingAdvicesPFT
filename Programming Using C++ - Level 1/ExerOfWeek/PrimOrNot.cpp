/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   PrimOrNot.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/16 17:23:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/16 17:49:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int ReadNumber()
{
	int number;
	cout << "Please entre a number :";
	cin >> number;

	return number;
}

void PrimOrNot(int number)
{
	int counter = 2;
	int round = number / 2;//or sqrt(number) its btter than round;
	if (number < counter)
	{
		cout << "\nIts Not a Prime Number.\n";
		return;
	}
	while(counter <= round)
	{
		if (number % counter == 0)
		{
			cout << "\nIts Not a Prime Number.\n";
			return;
		}
		counter++;
	}
	cout << "\nIts a Prime Number.\n";
}


int main()
{
	PrimOrNot(ReadNumber());

	return 0;
}
