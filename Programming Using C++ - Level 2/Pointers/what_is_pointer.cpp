/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   what_is_pointer.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/28 17:13:58 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/28 17:30:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
using namespace std;

int main()
{
	int a = 10;
	int *ptr;
	ptr = &a;

	printf("value of a = %d\n",a);
	printf("adress of a = %d\n\n",&a);

	printf("adress of value in pointer ptr = %d\n",ptr);
	printf("value in pointer ptr = %d\n",*ptr);
	printf("adress of pointer ptr = %d\n\n",&ptr);

	int x = 15;
	ptr = &x;
	printf("new value of pointer ptr = %d\n",*ptr);
	printf("adress of new value in pointer ptr = %d\n",ptr);
	printf("adress of pointer ptr = %d\n",&ptr);
	return 0;
}
