/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pay_rem.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 10:56:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 11:00:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int TotalBill,CashPaid;
	cout << "please entre TotalBill :";
	cin >> TotalBill;
	cout << "please entre CashPaid :";
	cin >> CashPaid;

	float rem = CashPaid - TotalBill;
	cout << rem << endl;

	return 0;


}
