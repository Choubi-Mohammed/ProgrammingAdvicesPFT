/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem25.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/15 17:34:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/15 17:43:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int ReadPincode()
{
	int PIN;
	cout << "entre You're Pin Code :";
	cin >> PIN;

	return PIN;
}

bool login()
{
	int counter =3;
	do
	{
		counter--;
		int nbr = ReadPincode();
		if (nbr == 1337)
			return 1;
		else
		{
			cout << "Wrong number! You Have " << counter << " Times.\n";
		}

	}while(counter >= 1);
	return 0;
}

int main()
{
	if(login() == 1)
		cout << "\nYour balace Is 3447 Dh.\n";
	else
		cout << "\nYou're card is Blocked.\n";


	return 0;
}
