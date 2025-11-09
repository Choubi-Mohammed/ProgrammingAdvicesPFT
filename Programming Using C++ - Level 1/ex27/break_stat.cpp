/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   break_stat.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/09 17:38:48 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/09 17:43:19 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int main()
{
	int arr[10] = {5,9,7,4,8,6,3,1,22,4};
	int i = 0;
	while(arr[i])
	{
		if (arr[i]==7)
		{
			cout << "Found number = " << arr[i] << " at position " << i+1 << endl;
			break;
		}
		i++;
	}

	return 0;
}
