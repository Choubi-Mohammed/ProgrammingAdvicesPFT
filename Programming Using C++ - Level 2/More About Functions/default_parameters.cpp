/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   default_parameters.cpp                                 |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/19 17:09:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/19 17:14:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

//hna drna var c and d value so ila ma3tinahach number rah default 0;
int tt_add(int a,int b,int c = 0,int d = 0)
{
	return (a+b+c+d);
}

int main()
{
	cout << tt_add(14,17) << endl;

	cout << tt_add(47,85,3) << endl;

	cout << tt_add(87,9,12,6) << endl;

	return 0;
}
