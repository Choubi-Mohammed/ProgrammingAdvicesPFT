/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   last_prime_nbr.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/05 17:08:14 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/05 17:28:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input a number to find the last prime number occurs before the number: ";
	cin >> number;
	int start = 2;
	int lastPrim= 2;
	for (int i = start;i < number;i++)
	{
		for(int j = start;j < i;j++)
		{
			if(i % j == 0)
				break;
			if (j == i -1)
			{
				lastPrim = i;
				break;
			}
		}
	}
	cout << lastPrim << " is the last prime number before " << number << endl;


	return 0;
}
