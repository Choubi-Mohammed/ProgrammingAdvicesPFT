/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   ser_fee_sal_tax.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 18:00:31 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 18:04:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
		int BillValue;
		float TotalBill;
		cout << "please entre the Bill Value :";
		cin >> BillValue;

		TotalBill = BillValue *1.1 * 1.16;
		cout << "the Total Bill is " << TotalBill << endl;

		return 0;

}
