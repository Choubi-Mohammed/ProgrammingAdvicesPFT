/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_of_arr.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/04 14:10:16 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/04 14:23:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int sum_of_arr(int arr[],int len)
{
	if(len == 0)
		return 0;
	return arr[len-1] + sum_of_arr(arr,len-1);
}
int main()
{
	int arr[] = {4,8,9,1,3,6,8,7,6,3,5,4,8,9,1,2,3};
	cout << sum_of_arr(arr,17);
}
