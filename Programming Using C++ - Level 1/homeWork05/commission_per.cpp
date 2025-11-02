/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   commission_per.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 11:05:27 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 11:26:17 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(long &number)
{
	cout << "please entre number :\n";
	cin >> number;
}

int Re_Commission(long number)
{
	int Commission;
	if (number > 1000000)
		Commission = number * 0.01;
	else if(number > 500000 && number <= 1000000)
		Commission = number * 0.02;
	else if(number > 100000 && number <= 500000)
		Commission = number * 0.03;
	else if(number > 50000 && number <= 100000)
		Commission = number * 0.05;
	else
		Commission = number * 0.0;

	return Commission;
}
int main()
{
	long TotalSales;
	ReadData(TotalSales);
	cout << Re_Commission(TotalSales) << endl;

	return 0;
}
