/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pass_fail.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 12:16:48 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 12:19:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Print(int Mark)
{
	if (Mark >= 50)
	{
		cout << "Pass\n";
	}
	else
	{
		cout << "Fail\n";
	}
}

int main()
{
	int Mark;
	cout << "please entrre you Mark :\n";
	cin >> Mark;
	Print(Mark);
	return 0;
}
