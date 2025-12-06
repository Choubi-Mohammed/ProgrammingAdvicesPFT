/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem47.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 20:58:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 21:04:10 by shobeedev            tfaaty fi l3oolaa   */
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

int tt_floor(float number)
{
	if (number < 0)
		return --number;
	else
		return number;
}

int main()
{
	float number =RetNumber();
	cout << "My floor() Function  : " << tt_floor(number) << endl;
	cout << "C++ floor() Function : " << floor(number) << endl;

	return 0;
}
