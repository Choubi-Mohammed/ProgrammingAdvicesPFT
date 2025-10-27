/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_diameter.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 09:52:34 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 09:56:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int d;
	float PI = 3.14;
	cout << "please entre the number :";
	cin >> d;
	float res = (PI * pow(d,2))/4;
	cout << "the res is : " << res << endl;

	return 0;
}
