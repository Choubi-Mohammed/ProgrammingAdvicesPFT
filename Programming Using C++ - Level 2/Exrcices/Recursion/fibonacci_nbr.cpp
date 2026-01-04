/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   fibonacci_nbr.cpp                                      |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/04 14:28:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/04 15:35:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int fibonacci_nbr(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fibonacci_nbr(n - 1 ) + fibonacci_nbr(n - 2);
}
int main()
{

	cout << fibonacci_nbr(1) << endl;
	cout << fibonacci_nbr(9) << endl;
	cout << fibonacci_nbr(14) << endl;
	cout << fibonacci_nbr(19) << endl;
	return 0;
}
