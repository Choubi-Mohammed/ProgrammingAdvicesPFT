/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   void_pointer.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/06 15:13:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/06 15:28:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int x = 1337;
	int a = 42;
	float c = 13.4;
	char d = 'x';

	void *ptr;

	ptr = &x;
	cout << "adress of x = " << &x << endl
		 << "value of x = " << x << endl
		 << "adress in ptr = " << ptr << endl
		 << "value in * ptr = " << *(int*)ptr << endl;
	cout << endl;
	ptr = &a;
	cout << "adress of a = " << &a << endl
		 << "value of a = " << a << endl
		 << "adress in ptr = " << ptr << endl
		 << "value in * ptr = " << *(int*)ptr << endl;
	cout << endl;
	ptr = &c;
	cout << "adress of c = " << &c << endl
		 << "value of c = " << c << endl
		 << "adress in ptr = " << ptr << endl
		 << "value in * ptr = " << *(float*)ptr << endl;
	cout << endl;
	ptr = &d;
	cout << "adress of d = " << &d << endl
		 << "value of d = " <<d  << endl
		 << "adress in ptr = " << ptr << endl
		 << "value in * ptr = " << *(char*)ptr << endl;
}
