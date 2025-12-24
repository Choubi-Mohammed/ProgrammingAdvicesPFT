/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   table_multi.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/24 11:21:55 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/24 11:45:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void FillArr(int arr[10][10])
{
	int i = 0;
	while(i < 10)
	{
		int j = 0;
		while(j < 10)
		{
			arr[i][j] = (i+1) * (j+1);
			j++;
		}
		i++;
	}
}

void PrintArr(int arr[10][10])
{
	int i = 0;
	while(i < 10)
	{
		int j = 0;
		while(j < 10)
		{
			cout << arr[i][j] << '\t';
			j++;
		}
		cout << endl;
		i++;
	}
}
int main()
{
	int arr[10][10];
	FillArr(arr);
	PrintArr(arr);

	return 0;
}

