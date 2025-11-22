/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem10.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 12:54:55 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/22 13:00:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int Readnumber()
{
	int number;
	do
	{
		cout << "Please enter a number : ";
		cin >> number;
	}while(number < 0);

	return number;
}

int Reversnumber(int number)
{
	int numbertwo = 0;
	int rem = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number / 10;
		numbertwo = numbertwo * 10 + rem;
	}
	return numbertwo;
}

void PalindromOrNot(int number)
{
	if (number == Reversnumber(number))
		cout << "\nYes, it is a Palindrom number.\n";
	else
		cout << "\nNo, it is NOT a Palindrom number.\n";
}

int main()
{
	PalindromOrNot(Readnumber());

	return 0;
}
