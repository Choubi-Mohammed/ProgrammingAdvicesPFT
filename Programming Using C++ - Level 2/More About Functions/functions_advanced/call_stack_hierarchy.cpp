/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   call_stack_hierarchy.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/20 11:01:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/20 11:04:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void func4()
{
	cout << "Hi, This is Function 4!" << endl;
}

void func3()
{
	func4();
}
void func2()
{
	func3();
}
void func1()
{
	func2();
}
int main()
{
	func1();
	return 0;
}
