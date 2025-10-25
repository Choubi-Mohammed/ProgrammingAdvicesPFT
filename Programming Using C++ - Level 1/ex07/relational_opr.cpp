/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   relational_opr.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/25 18:18:52 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/25 19:05:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout << "please entre the first nbr :";
	cin >> n1;
	cout << "please entre the second nbr :";
	cin >> n2;

	cout << n1 << " == " << n2 << " is " << (n1 == n2) << endl;
	cout << n1 << " != " << n2 << " is " << (n1 != n2) << endl;
	cout << n1 << " > " << n2 << " is " << (n1 > n2) << endl;
	cout << n1 << " < " << n2 << " is " << (n1 < n2) << endl;
	cout << n1 << " >= " << n2 << " is " << (n1 >= n2) << endl;
	cout << n1 << " <= " << n2 << " is " << (n1 <= n2) << endl;


}
