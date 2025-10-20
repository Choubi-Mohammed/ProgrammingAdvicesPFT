/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   piggy_Bank_clc.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 10:40:05 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 10:52:19 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
	int pen,nick,dim,quart,dol;
	cout << "please entre pen,nick,dim,quart,dol :\n";
	cin >> pen;
	cin >> nick;
	cin >> dim;
	cin >> quart;
	cin >> dol;

	int pennies = pen + (nick * 5) + (dim * 10) + (quart * 25) + (dol * 100);
	float dollar = pennies/100;
	cout << pennies << " Pennies" << endl;
	cout << dollar << " Dollars" << endl;

	return 0;
}
