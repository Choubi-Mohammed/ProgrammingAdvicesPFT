/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumOfFirst_10.cpp                                      |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/04 17:29:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/04 17:35:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int sumOfFirst_10 = 0;
	cout << "The natural numbers are:\n";
	for(int i = 1;i <= 10;i++)
	{
		cout << i << " ";
		sumOfFirst_10 = sumOfFirst_10 + i;
	}
	cout << "\nThe sum of first 10 natural numbers:" << sumOfFirst_10 << endl;

	return 0;
}
