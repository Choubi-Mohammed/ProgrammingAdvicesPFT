/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   isPrim.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/05 10:47:48 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/05 12:10:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


int main()
{
	int Number;
	cout << "Please entre a number to check is Prime or Not : ";
	cin >> Number;
	int counter = 2;
	if(Number <= counter)
	{
		cout << "The entered number is a Prime number.\n";
	}else{
		for(counter;counter < Number;counter++)
		{
			if(Number % counter == 0)
			{
				cout << "The entered number is Not a Prime number.\n";
				break;
			}
			if(counter == Number - 1)
			{
				cout << "The entered number is a Prime Number.\n";
				break;
			}
		}
	}

}
