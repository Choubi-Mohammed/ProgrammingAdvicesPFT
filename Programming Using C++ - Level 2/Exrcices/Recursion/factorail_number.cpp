/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   factorail_number.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/04 14:24:59 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/04 14:26:57 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int factorail_number(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorail_number(n - 1);
}

int main()
{
	cout << factorail_number(5);

	return 0;
}
