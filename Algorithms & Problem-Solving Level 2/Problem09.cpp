/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem09.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/21 16:07:05 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/21 16:13:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int ReadNumber()
{
	int number;
	cout << "Please enter a number : ";
	cin >> number;

	return number;
}

int reversNumber(int number)
{
	int rem = 0;
	int numberTwo = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number /10;
		numberTwo = numberTwo * 10 + rem;
	}
	return numberTwo;
}
void PrintDigitN(int number)
{
	int rem = 0;
	while(number > 0)
	{
		rem =number % 10;
		number = number /10;
		cout << rem << endl;
	}
}

int main()
{
	PrintDigitN(reversNumber(ReadNumber()));

	return 0;
}
