/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 09:50:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 09:53:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float circle_erea(int r)
{
	const float PI = 3.14;
	float Erea = PI * pow(r,2);
	return Erea;
}

int main()
{
	int r;
	cout << "please entre r :";
	cin >> r;
	cout << circle_erea(r) << endl;

	return 0;
}
