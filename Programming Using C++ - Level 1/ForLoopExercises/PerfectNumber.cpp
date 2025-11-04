/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   PerfectNumber.cpp                                      |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/04 18:10:02 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/04 22:51:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


int main()
{
	int sum = 0;
	for(int n = 1;n <= 500;n++)
	{
		sum = 0;
		for(int i = 1;i <= n/2;i++)
		{
			if(n % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == n)
					cout << n << endl;


	}
}
