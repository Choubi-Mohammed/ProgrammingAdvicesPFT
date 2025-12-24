/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   two_dim_arr.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/24 11:13:26 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/24 11:18:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	// int arr[row][colom]
	int arr[3][4] = { {7,9,4,10}, {12,8,4,1}, {14,99,20,3}};

	int i = 0;
	while(i < 3)
	{
		cout << "Row[" << i << "] :\n\t";
		int j = 0;
		while(j < 4)
		{
			cout << "Col[" << j << "] = " << arr[i][j] << ", ";
			j++;
		}
		cout << endl;
		i++;
	}

	return 0;

}
