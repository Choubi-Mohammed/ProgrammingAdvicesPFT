/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   static_local_var.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/20 13:29:10 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/20 13:37:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void counter1()
{
	//local varaible = y3ny scop dyalha ky ysaly mn func ka tsaly
	int number = 1;
	cout << number << " ";
	number++;
}

void counter2()
{
	//static varaible = y3ny scop dyal 3la tool program ky yb9a 7ta ky ysaly program
	static int number = 1;
	cout << number << " ";
	number++;
}

int main()
{
	cout << "Local varaible : ";
	counter1();
	counter1();
	counter1();
	cout << endl << "Static varaible : ";
	counter2();
	counter2();
	counter2();

	return 0;
}
