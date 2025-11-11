/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem3.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/11 17:36:46 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/11 17:45:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum enEV_OD {Even = 1,Odd = 2};
int ReadNbr()
{
	int nbr;
	cout << "Entre a number : ";
	cin >> nbr;
	return nbr;
}

enEV_OD CheckNbr(int nbr)
{
	int res = nbr % 2;
	if (res == 0)
		return enEV_OD::Even;
	else
		return enEV_OD::Odd;
}

void PrintEvenOdd(enEV_OD res)
{
	if(res == enEV_OD::Even)
		cout << "The nbr is Even\n";
	else
		cout << "The nbr is Odd\n";
}

int main()
{
	PrintEvenOdd(CheckNbr(ReadNbr()));

	return 0;
}

