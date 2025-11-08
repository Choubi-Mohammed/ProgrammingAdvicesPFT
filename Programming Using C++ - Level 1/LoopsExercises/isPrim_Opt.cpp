/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   isPrim_Opt.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/05 12:44:24 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/05 12:50:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int Number;
	cout << "please entre a number to check is a Prime or Not : ";
	cin >> Number;

	int counter = 2;
	int M_Round = Number/2;
	if(Number <= counter)
		cout << "the entred number is Prime Number.\n";
	else
	{
		for(counter;counter <= M_Round;counter++)
		{
			if(Number % counter == 0)
			{
				cout << "the entred number is Not a Prime Number.\n";
				break;
			}
			if(counter == M_Round)
			{
				cout << "thee entred number is Prime Number.\n";
				break;
			}
		}
	}

		return 0;
}
