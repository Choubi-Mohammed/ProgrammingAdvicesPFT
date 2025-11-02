/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   enum_stat.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 13:11:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 16:52:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum ScreenColor {Red=1,Green=2,Yallow=3,Blue=4};

int main()
{
	int nbr;
	cout << "please entre nbr :\n";
	cin >> nbr;
	ScreenColor color;
	color = (ScreenColor) nbr;
	if (color == ScreenColor::Red)
		cout << "Red\n";
	else if (color == ScreenColor::Green)
		cout << "Green\n";
	else if (color == ScreenColor::Yallow)
		cout << "Yallow\n";
	else if (color == ScreenColor::Blue)
		cout << "Blue\n";
	else
		cout << "Wrong choice!\n";


	return 0;
}
