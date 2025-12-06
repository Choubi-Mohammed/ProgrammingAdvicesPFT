/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem46.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 20:32:16 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 20:52:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float number;
	cout << "please enter a number : ";
	cin >> number;

	return number;
}
float tt_abs(float number)
{
	if (number > 0)
		return number;
	else if(number < 0)
		return -number;
	else
		return number;
}

float getFraction(float number)
{
	return number - (int)number;
}

float tt_round(float number)
{
	//example number = 10.7, IntPart = 10.
	int IntPart = (int)number;

	//example number = 10.7, FractionPart = 0.7.
	float FractionPart = getFraction(number);

	if(tt_abs(FractionPart) >= .5)
	{
		if(number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}else
		return IntPart;
}

int main()
{
	float number = ReadNumber();
	cout << "My round() Function  : " << tt_round(number) << endl;
	cout << "C++ round() Function : " << round(number) << endl;

	return 0;
}


