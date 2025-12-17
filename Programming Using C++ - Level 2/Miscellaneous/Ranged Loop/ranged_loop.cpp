/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   ranged_loop.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/17 17:33:44 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/17 17:52:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


int main()
{
	int arrNumber[] = {1,8,3,6,7,9,5,4,1,2,9};
	cout << "Array Of numbers : ";
	for (int n : arrNumber)
	{
		cout << n << " ";
	}
	cout << "\n\n";

	char arrChar[] = {'e','d','a','d','v','r','q'};
	cout << "Array of Characters : ";
	for (char n : arrChar)
	{
		cout << n << " ";
	}
	cout << "\n\n";

	string arrString[] = {"Ibrahim","Yahya","Abdellah","Ahmed","Mohammed"};
	cout << "Array of Strings : ";
	for(string str:arrString)
	{
		cout << str << " ";
	}
	cout << "\n\n";
}
