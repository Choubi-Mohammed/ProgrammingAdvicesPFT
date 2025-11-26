/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem25.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/26 18:31:29 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/26 18:40:54 by shobeedev            tfaaty fi l3oolaa   */
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

void FillArray(int arr[],int &len)
{
	cout << "Enter the size of Array : ";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}

void SumOfArr(int arr[],int len)
{
	int i = 0;
	int sum = 0;
	while(i < len)
	{
		sum = sum + arr[i];
		i++;
	}

	cout << "\n The sum of array : " << sum << endl;
}

void Print(int arr[],int len)
{
	FillArray(arr,len);
	cout << "Array of elemnts : ";
	int i = 0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
	SumOfArr(arr,len);
}

int main()
{
	srand((unsigned) time(NULL));
	int arr[100],len;
	Print(arr,len);

	return 0;
}
