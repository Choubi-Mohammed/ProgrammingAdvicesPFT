/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   call_byVal_byRef.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/28 12:40:21 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/28 12:47:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void funcByVal(int a)
{
	a++;
}

void funcByRef(int &a)
{
	a++;
}

int main()
{
	//resume :

	/*Call by Value:  means calling the value itself not the reference (address);
	So when we call by value, it will have a new address because it creates a new slot in memory.
	Call by Reference: means calling the reference (address + value).
	When we call by reference, it has the same address, so it does not create a new slot in memory.
	Instead, it creates an alias (another nickname).*/

	int a = 10;

	//by value
	funcByVal(a);
	cout << "call by value a = " << a << endl;

	//by reference
	funcByRef(a);
	cout << "call by reference a = " << a << endl;

	//useing this & to get the adress the varaible.
	cout << "adress the varaible a is : " << &a << endl;
	return 0;
}
