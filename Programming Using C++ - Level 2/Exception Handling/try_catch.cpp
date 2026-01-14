/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   try_catch.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 17:41:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 17:50:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vec{1337,22,42,23};

	try
	{
		cout << vec.at(4);
	}catch(...)
	{
		cout << "out of bound!!!\n";
	}
}
