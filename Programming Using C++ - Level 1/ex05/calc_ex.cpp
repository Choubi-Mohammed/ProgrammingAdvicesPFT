/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   calc_ex.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 17:21:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 17:36:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int n1;
	int n2;
	cout << "Welcome to our calculate !\n\n";
	cout << "Please entre the first number N1:";
	cin >> n1;
	cout << "Please entre the second number N2:";
	cin >> n2;

	cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
	cout << n1 << " - " << n2 << " = " << n1-n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1*n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
	cout << n1 << " % " << n2 << " = " << n1%n2 << endl;

	return 0;



}
