/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   ATM_Pin.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 12:38:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 12:52:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadPin();

void CheckPin(int nbr)
{
	if(nbr == 1337)
		cout << "You're Balance is : 7500 DH\n";
	else
	{
		cout << "Wrong PIN\n";
		ReadPin();
	}
}

void ReadPin()
{
	int PIN;
	cout << "Please entre you PIN number : \n";
	cin >> PIN;
	CheckPin(PIN);
}

int main()
{
	ReadPin();

	return 0;
}
