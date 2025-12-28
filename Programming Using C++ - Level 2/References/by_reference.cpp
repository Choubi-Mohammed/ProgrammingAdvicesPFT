/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   by_reference.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/28 12:57:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/28 13:01:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int &x = a;

	//Address of a = Address of x.
	//It will be the same address and doesn’t need to create a new slot.
	//So x will be a, and a will be x.
	//If I change a, it will also affect x, and if I change x, it will also affect a.

	cout << a << endl
		 << x << endl << endl
		 << &a << endl
		 << &x << endl << endl;

	x = 15;
	cout << a << endl
		 << x << endl << endl
		 << &a << endl
		 << &x << endl;

	return 0;
}
