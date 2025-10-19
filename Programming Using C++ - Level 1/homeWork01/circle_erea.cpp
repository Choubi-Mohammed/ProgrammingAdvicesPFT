/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 18:31:41 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 18:36:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int d;
	const float PI = 3.14;
	cout << "please entre D : ";
	cin >> d;
	float Erea = (PI * (d*d))/4;
	cout << "Circle Erea is : " << Erea << endl;

	return 0;

}
