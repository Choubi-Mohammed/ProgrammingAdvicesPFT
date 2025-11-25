/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem21.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/25 19:09:30 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/25 19:36:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadSizeArr(int &size)
{
	cout << "size = ";
	cin >> size;
}

void ReadArr(int arr[],int size)
{
	int i = 0;
	while(i < size)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
		i++;
	}
}
void ReadCheckNumber(int &CheckNumber)
{
	cout << "Enter the number you want to check : ";
	cin >> CheckNumber;
}

int ReapeatNumber(int CheckNumber,int arr[],int size)
{
	int i = 0;
	int freq= 0;
	while (i < size)
	{
		if(arr[i] == CheckNumber)
		{
			freq++;
		}
		i++;
	}
	return freq;
}

void Print(int arr[],int size,int CheckNumber)
{
	cout << "Original Array : ";
	int i = 0;
	while(i < size)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << '\n' <<CheckNumber << " is repeated " << ReapeatNumber(CheckNumber,arr,size) << " time(s).\n";

}

int main()
{
	int size,CheckNumber;
	int arr[size];
	ReadSizeArr(size);
	ReadArr(arr,size);
	ReadCheckNumber(CheckNumber);
	Print(arr,size,CheckNumber);

	return 0;

}
