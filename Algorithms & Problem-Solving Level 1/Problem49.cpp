/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem49.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 21:31:50 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 21:51:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float retNbr()
{
	float number;
	cout << "please enter a number : ";
	cin >> number;
	return number;
}
float tt_pow(float number,float m)
{
	float i = 1;
	float power = 1;
	while(i < m)
	{
		power = power * i;
		i++;
	}
	return power;
}
float tt_sqrt(float number)
{
	return pow(number,0.5);
}
int main()
{
	float number = retNbr();
	cout << "My sqrt() Function : "<< tt_sqrt(number) << endl;
	cout << "C++ srt() Function : " << sqrt(number) << endl;
	return 0;

}
