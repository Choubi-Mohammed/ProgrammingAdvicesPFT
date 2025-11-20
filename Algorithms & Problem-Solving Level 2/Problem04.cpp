/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem04.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/19 18:15:41 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/20 17:10:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;
void ReadNumber(int &number)
{
	cout << "Please entre a number To Print it in Reversed order : ";
	cin >> number;
}

void PrintNRevOrd(int number)//extract digit from number
{
	int rem = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number / 10;
		cout << "Right(Mod) = " << rem << "  , Left(Div) = " << number << endl;
	}
}

int main()
{
	int number;
	ReadNumber(number);
	PrintNRevOrd(number);

	return 0;// its main the programe is run seccesfulyy
}
