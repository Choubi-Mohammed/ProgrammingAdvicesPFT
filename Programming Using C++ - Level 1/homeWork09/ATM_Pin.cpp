/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   ATM_Pin.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 19:26:23 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 19:41:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr;
	int i = 0;
	while (i != 3)
	{
		cout << "please entre the PIN number :";
		cin >> nbr;
		if (nbr == 1337)
		{
			cout << "you Balance is 50269 DH" << endl;
			break;
		}
		if (i == 2)
		{
			cout << "Card is BLOCK\n";
		}
		i++;
	}

	return 0;
}
