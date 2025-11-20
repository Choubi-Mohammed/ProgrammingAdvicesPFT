/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem07.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/20 18:21:45 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/20 18:33:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumbers(long &number,int &reaptnbr)
{
	cout << "Please entre a number :";
	cin >> number;
	cout << "enter reapeat number : ";
	cin >> reaptnbr;
}

int FrequencyDigit(long number,int reaptnbr)
{
	int rem = 0;
	int counter = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number / 10;
		if (rem == reaptnbr)
			counter++;
	}
	return counter;
}

int main()
{
	long number;
	int reaptnbr;
	ReadNumbers(number,reaptnbr);
	cout << "\nDigit " << reaptnbr << " Frequency is " << FrequencyDigit(number,reaptnbr) << " Time(s).";


	return 0;
}
