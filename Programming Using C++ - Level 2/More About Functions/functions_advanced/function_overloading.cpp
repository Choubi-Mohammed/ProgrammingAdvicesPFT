/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   function_overloading.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/20 10:33:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/20 10:39:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int add(int a,int b)
{
	return (a+b);
}

double add(double a,double b)
{
	return (a+b);
}

int add(int a,int b,int c)
{
	return (a+b+c);
}

int add(int a,int b,int c,int d)
{
	return (a+b+c+d);
}

int main()
{
	cout << add(15,48) << endl;
	cout << add(11.15,9.7) << endl;
	cout << add(17,18,9) << endl;
	cout << add(14,5,69,7) << endl;

	return 0;
}



