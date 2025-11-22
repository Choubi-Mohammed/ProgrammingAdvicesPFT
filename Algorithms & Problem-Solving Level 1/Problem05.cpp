/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem05.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/20 17:24:23 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/20 17:29:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumber(int &number)
{
	cout << "enter a number :";
	cin >> number;
}

int sumDigit(int number)
{
	int sum = 0;
	int rem = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number / 10;
		sum = sum + rem;
	}
	return sum;
}

int main()
{
	int number;
	Readnumber(number);
	cout << "the sum of digit is : " << sumDigit(number) << endl;


	return 0;
}
