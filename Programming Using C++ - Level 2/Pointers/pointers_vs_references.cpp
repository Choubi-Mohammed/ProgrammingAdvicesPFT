/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pointers_vs_references.cpp                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 11:02:42 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/29 11:35:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int a = 1337;//the main varaible
	int& x = a;// just a second name or nickname(alias) for a

	cout << &a << endl;//adress or reference of varaible a;
	cout << &x << endl << endl;
	//printf("%p\n%p\n",&a,&x);
	cout << a << endl;
	cout << x << endl << endl;
	int* p = &a;
	cout << p << endl;
	cout << *p << endl << endl;
	int b = 20;
	p = &b;
	cout << p << endl;
	cout << *p << endl << endl;

	//another point
	int k = 42;
	x = k;

	cout << a << endl;
	cout << x << endl;
	return 0;
}
