/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_CirCumfrence.cpp                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 10:19:37 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 10:23:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

float circle_erea_CirCumfrence(int l)
{
	const float PI = 3.14;
	float Erea = (l * l)/(4 * PI);
	return Erea;
}

int main()
{
	int l;
	cout << "please entre l : ";
	cin >> l;
	cout << circle_erea_CirCumfrence(l) << endl;

	return 0;
}
