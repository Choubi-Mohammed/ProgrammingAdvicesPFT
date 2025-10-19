/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_circumference.cpp                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 18:42:50 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 18:45:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int l;
	const float PI = 3.14;
	cout << "please entre l :";
	cin >> l;

	float Erea = (l*l)/(4*PI);
	cout << "Circle Erea Circumference is " << Erea << endl;

	return 0;

}
