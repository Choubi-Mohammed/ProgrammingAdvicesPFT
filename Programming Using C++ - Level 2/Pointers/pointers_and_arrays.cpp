/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pointers_and_arrays.cpp                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 15:13:42 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/29 15:21:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {8,9,1,22,5,6};
	int *ptr;
	ptr = arr;

	//ptr is equivalent to &arr[0];
	//ptr + 1 is equivalent to &arr[1];
	//ptr + 2 is equivalent to &arr[2];
	//ptr + i is equivalent to &arr[i];

	int i = 0;
	while(i < 6)
	{
		cout << "the adress of ptr + " << i << " = " << ptr +i << endl;
		cout << "the value of *(ptr + " << i << ") = " << *(ptr + i) << endl << endl;
		i++;
	}

	return 0;
}
