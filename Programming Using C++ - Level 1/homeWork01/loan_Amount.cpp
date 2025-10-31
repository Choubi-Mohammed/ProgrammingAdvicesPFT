/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   loan_Amount.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 18:27:14 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 18:30:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int loanAmount,MonthlyPay;
	cout << "please entre loan Amount :";
	cin >> loanAmount;
	cout << "please entre Monthly Pay :";
	cin >> MonthlyPay;

	int settle_loan = loanAmount / MonthlyPay;
	cout << settle_loan << " Months" << endl;

	return 0;

}
