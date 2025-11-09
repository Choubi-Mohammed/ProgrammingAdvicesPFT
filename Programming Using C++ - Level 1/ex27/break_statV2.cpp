/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   break_statV2.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/09 17:47:24 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/09 17:52:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int arr[13] = {14,17,9,63,9,7,12,88,9,5,4,2,1};
	int searchNbr = 63;
	int i = 0;
	while(arr[i])
	{
		cout << "iteration = " << i+1 << endl;
		if(searchNbr == arr[i])
		{
			cout << "found nbr in position " << i+1 << endl;
		}
		i++;
	}
}
