/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   dereferencing_pointer.cpp                              |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/28 17:57:03 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/28 18:06:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
using namespace std;

int main()
{
	int a = 42;

	int *ptr = &a;

	printf("value a = %d\n",a);//call by value
	printf("adress of a = %d\n\n",&a);//call by reference

	printf("value of pointer ptr = %d\n",ptr);
	printf("the value thats pointing *ptr = %d\n\n",*ptr);// this is dereferencing

	*ptr = 1337;
	printf("*ptr = %d\n",*ptr);
	printf("a = %d\n\n",a);

	a = 13;
	printf("a = %d\n",a);
	printf("*ptr = %d\n",*ptr);

	return 0;
}
