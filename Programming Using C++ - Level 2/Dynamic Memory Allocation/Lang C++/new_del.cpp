/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   new_del.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 12:42:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 12:49:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
	//meth 1 allocate memory for ptr using new and deallocate memory using delete.
	int *ptr;
	ptr = new int;
	*ptr = 1337;
	cout << *ptr << endl;
	delete ptr;
	//meth 2 allocate memory for ptr using new and deallocate memory using delete.
	int *ptr2 = new int(42);
	cout << *ptr2 << endl;
	delete ptr2;

	float *p = new float(1.369);
	cout << *p << endl;
	delete p;
}
