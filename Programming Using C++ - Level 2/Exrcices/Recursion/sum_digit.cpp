/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_digit.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/04 15:39:53 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/04 15:45:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int sum_digit(int nbr)
{
	if(nbr >= 0 && nbr <= 9)
		return nbr;

	return nbr%10 + sum_digit(nbr / 10);
}

int main()
{
	cout << sum_digit(1337) << endl;
	cout << sum_digit(42) << endl;
	cout << sum_digit(2) << endl;

	return 0;
}
