/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_throu_daimter.cpp                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 09:55:13 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 09:58:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float circle_erea_throu_daimter(int d)
{
	const float PI = 3.14;
	float Erea = (PI * pow(d,2))/4;
	return Erea;
}

int main()
{
	int d;
	cout << "please entre d :";
	cin >> d;
	cout << circle_erea_throu_daimter(d) << endl;

	return 0;
}
