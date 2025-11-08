/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Print_N_1.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 15:12:27 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 15:15:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr;
	cout << "please entre a number :";
	cin >> nbr;
	while(nbr < 0)
	{
		cout << "please entre a positive number : ";
		cin >> nbr;
	}
	int i = nbr;
	while(i >= 1)
	{
		cout << i << endl;
		i--;
	}

	return 0;
}
