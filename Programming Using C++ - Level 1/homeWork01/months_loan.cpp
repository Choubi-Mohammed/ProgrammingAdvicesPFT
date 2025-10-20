/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   months_loan.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 18:35:46 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 18:39:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int LoanAmount,SettleLoan;
	cout << "please entre Loan Amount :";
	cin >> LoanAmount;
	cout << "please entre Settle Loan :";
	cin >> SettleLoan;
	int monthlyAmount = LoanAmount / SettleLoan;

	cout << monthlyAmount <<endl;
}
