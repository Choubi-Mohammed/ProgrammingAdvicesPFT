/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem30.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/01 18:12:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/01 18:44:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

void ReadLenArr(int &len)
{
	cout << "Please enter length the array : ";
	cin >> len;
}

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to -from + 1 ) +from;
	return RandomNumber;
}

void FillArray(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		arr[i] = i+1;
		i++;
	}
}
void SwapNbr(int &n1,int &n2)
{
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}
void ShufleArr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{

		SwapNbr(arr[RandomNumber(1,len)-1],arr[RandomNumber(1,len)-1]);
		i++;
	}
}

void PrintArr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100],len;

	ReadLenArr(len);

	FillArray(arr,len);
	cout << "Array Elements Before Shuffle : ";
	PrintArr(arr,len);

	ShufleArr(arr,len);
	cout << "Array After Shuffle : ";
	PrintArr(arr,len);


	return 0;
}
