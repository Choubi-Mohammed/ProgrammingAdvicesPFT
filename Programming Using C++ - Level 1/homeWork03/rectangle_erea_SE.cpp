/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   rectangle_erea_SE.cpp                                  |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 09:44:56 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 09:49:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float rectangle_erea_SE(int a,int d)
{
	float Erea = a * sqrt(pow(d,2)-pow(a,2));
	return Erea;
}

int main()
{
	int a,d;
	cout << "please entre the numbers a,d :\n";
	cin >> a;
	cin >> d;
	cout << rectangle_erea_SE(a,d) << endl;

	return 0;
}
