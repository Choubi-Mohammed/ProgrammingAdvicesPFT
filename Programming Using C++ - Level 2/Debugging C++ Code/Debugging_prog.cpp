/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Debugging_prog.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/14 19:39:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/14 19:40:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int MySum(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}

int main()
{
	int arr1[5] = { 200,100,50,25,30 };
	int a, b, c;
	a = 10;
	b = 20;
	a++;
	++b;
	c = a + b;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
		a = a + a * i;
	}
	c = MySum(a, b);
	cout << c;
	return 0;
}
