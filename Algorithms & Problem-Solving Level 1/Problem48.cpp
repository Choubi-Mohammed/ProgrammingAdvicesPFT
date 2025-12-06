/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem48.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 20:58:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 21:19:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float RetNumber()
{
	float number;
	cout << "Please enter a number : ";
	cin >> number;
	return number;
}
float getFraction(float number)
{
	return number - (int)number;
}
float tt_abs(float number)
{
	if(number > 0)
		return number;
	else if(number < 0)
		return -number;
	else
		return number;
}
int tt_ceil(float number)
{
	if(tt_abs(getFraction(number)) > 0)
	{
		if (number > 0)
			return ++number;
		else
			return number;
	}else
		return number;
}

int main()
{
	float number =RetNumber();
	cout << "My ceil() Function  : " << tt_ceil(number) << endl;
	cout << "C++ ceil() Function : " << ceil(number) << endl;

	return 0;
}
