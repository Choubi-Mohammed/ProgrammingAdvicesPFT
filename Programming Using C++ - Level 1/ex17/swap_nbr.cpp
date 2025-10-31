/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   swap_nbr.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 17:47:04 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 17:52:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void swap_nbr(int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a,b;
	cout << "please entre two nbrs a,b:\n";
	cin >> a;
	cin >> b;
	swap_nbr(a,b);
	cout << "the two nbr now : a = " << a << ",b = " << b << endl;
	cout << "now lest see &a = " << &a << ",&b = " << &b << endl;
	return 0;
}
