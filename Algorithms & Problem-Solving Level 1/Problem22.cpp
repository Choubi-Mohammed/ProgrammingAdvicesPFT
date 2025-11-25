/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem22.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/25 20:36:53 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/25 20:48:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from + 1) + from;
	return RandomNumber;
}


void FillArrayRanNbr(int arr[])
{
	int i = 0;
	while(i < 100)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}

void PrintArr(int arr[],int &len)
{
	cout << "enter len do you want : ";
	cin >> len;
	int i = 0;
	cout << "Array of Element : ";
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100],size;
	FillArrayRanNbr(arr);
	PrintArr(arr,size);

	return 0;
}
