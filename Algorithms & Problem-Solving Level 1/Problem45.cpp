/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem45.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 17:50:23 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 17:58:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

void Readumber(float &number)
{
	cout << "plaese enter a number : ";
	cin >> number;
}

float MyabsFunc(float number)
{
	if(number > 0)
		return number;
	else if(number < 0)
		return -number;
	else
		return number;
}

int main()
{
	float number;

	Readumber(number);

	cout << "My abs() Function : " << MyabsFunc(number) << endl;
	cout << "C++ abs() Function : " << abs(number) << endl;

	return 0;
}
