/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumDigit.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/17 19:50:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/20 17:21:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void ReadNumber(int &number)
{
	cout << "Please entre a number : ";
	cin >> number;
}
int sumDigit(int number)//Extaract digit from number and sum it.
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
	ReadNumber(number);
	cout << "The sum digit of number " << number << " is : " << sumDigit(number) << endl;

	return 0;
}
