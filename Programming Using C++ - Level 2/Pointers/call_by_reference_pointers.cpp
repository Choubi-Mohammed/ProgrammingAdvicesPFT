/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   call_by_reference_pointers.cpp                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 12:10:53 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/29 12:15:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void swap(int *num1,int *num2)
{
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

int main()
{
	int a = 42;
	int b = 1337;
	cout << "a befor swap : " << a << endl;
	cout << "b befor swap : " << b << endl << endl;

	int *ptr1,*ptr2;
	ptr1 = &a;
	ptr2 = &b;
	swap(ptr1,ptr2);

	cout << "a befor swap : " << a << endl;
	cout << "b befor swap : " << b << endl;

	return 0;
}
