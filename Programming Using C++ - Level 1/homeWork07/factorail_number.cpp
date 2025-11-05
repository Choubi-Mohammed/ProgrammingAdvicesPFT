/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   factorail_number.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/05 20:28:17 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/05 20:42:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(int & number)
{
	cout << "please entre a number :";
	cin >> number;
}

int factorail_number(int number)
{
	int factorail_number = 1;
	for(int i = number;i >= 1;i--)
	{
		factorail_number = factorail_number * i;
	}
	return factorail_number;
}

int main()
{
	int number;
	ReadData(number);
	cout << factorail_number(number) << endl;
}
