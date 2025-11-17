/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   LastPrime.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/16 19:48:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/17 16:57:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &number)
{
	cout << "Input a number to find the last prime number occurs before the number: ";
	cin >> number;
}
bool PrimOrNot(int number)
{
	if (number <= 1)
		return false;
	int counter = 2;
	while (counter <= number /2)
	{
		if(number % counter == 0)
			return false;
		counter++;
	}
	return true;
}
int LastPrime(int number)
{
	int counter = 1;
	int last = 0;
	while(counter <= number)
	{
		if (PrimOrNot(counter) == true)
			last = counter;
		counter++;
	}
	return last;
}

int main()
{
	int number;
	ReadNumber(number);
	cout << LastPrime(number) << " is the last prime number before " << number <<endl;


	return 0;
}
