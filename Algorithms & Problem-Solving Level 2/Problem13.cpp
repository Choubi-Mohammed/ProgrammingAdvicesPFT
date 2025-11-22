/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem13.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 13:43:28 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/22 17:52:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadPosNumber(int &number)
{
	do
	{
		cout << "Pleasse enter a number : ";
		cin >> number;
	}while(number < 0);
}
void Print_Patter_Letter(int number)
{
	cout << endl;
	int i = 65 + number - 1;
	while(i >= 65)
	{
		int j = 1;
		while(j <= (number - (65 + number - 1 - i)))//had operation ka tkhlina ndir repeat dyal char inverted.
		{
			cout << (char)i;
			j++;
		}
		cout << endl;
		i--;
	}
}

int main()
{
	int number;
	ReadPosNumber(number);
	Print_Patter_Letter(number);

	return 0;
}
