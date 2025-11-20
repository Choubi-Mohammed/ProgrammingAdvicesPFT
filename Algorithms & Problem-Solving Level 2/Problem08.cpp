/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem08.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/20 19:02:02 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/20 20:40:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

long ReadNumber()
{
	long number;
	cout << "Please enter a number : ";
	cin >> number;

	return number;
}

int FrequencyDigit(long number, int checkNbr)
{
	int counter = 0;
	int rem = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number / 10;
		if (checkNbr == rem)
			counter++;
	}
	return counter;
}

void PrintDigitFrq(long number)
{
	int i = 0;
	int checknbr = 0;
	while(i <= 10)
	{
		checknbr = FrequencyDigit(number,i);
		if(checknbr > 0)
			cout << "Digit " << i << " Frequency is " << checknbr << " time(s).\n";
		i++;
	}
}

int main()
{
	long number = ReadNumber();
	cout << endl;
	PrintDigitFrq(number);

	return 0;
}
