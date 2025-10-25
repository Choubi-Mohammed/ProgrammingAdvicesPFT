/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   art_oper_2.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/25 17:43:46 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/25 17:49:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = a++;

	cout << " a = " << a << endl;
	cout << " b = " << b << endl;//hna b stored a o mn b3d zadt bi wa7d fi

	b = ++a;
	cout << " a = " << a << endl;//here in b zadt bi wa7d 3ad stored
	cout << " b = " << b << endl;

	return 0;


}
