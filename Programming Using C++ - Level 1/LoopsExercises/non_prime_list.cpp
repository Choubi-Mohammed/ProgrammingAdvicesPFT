/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   non_prime_list.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 17:05:48 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 17:12:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &number)
{
	cout << "Input the upperlimit: ";
	cin >> number;
}
bool PrimOrNot(int number)
{
	if(number <= 1)
		return false;
	int i =2;
	while(i < number )
	{
		if(number % i == 0)
			return false;
		i++;
	}
	return true;
}

void non_prime_list(int number)
{
	int i = 1;
	cout << "The non-prime numbers are: \n";
	while(i <= number)
	{
		if (PrimOrNot(i) == false)
			cout << i << " ";
		i++;
	}
}
int main()
{
	int number;
	ReadNumber(number);
	non_prime_list(number);

	return 0;
}
