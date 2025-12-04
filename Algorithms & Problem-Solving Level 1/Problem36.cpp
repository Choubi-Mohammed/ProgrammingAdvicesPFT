/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem36.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/04 19:32:14 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/04 19:51:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from - 1) + from;
	return RandomNumber;
}

void FIllArr(int arr[],int &len)
{
	cout << "Please enter the length : ";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}

void PrintArr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		cout << arr[i] <<" ";
		i++;
	}
	cout << "\n\n";
}
void AddNbrArr(int number,int destArr[],int &Len2Arr)
{
	Len2Arr++;
	destArr[Len2Arr-1] = number;
}
void CopyArrusingAddNbrArr(int srcArr[],int destArr[],int Len1Arr,int &Len2Arr)
{
	int i = 0;
	while(i < Len1Arr)
	{
		AddNbrArr(srcArr[i],destArr,Len2Arr);
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int srcArr[100];
	int Len1Arr = 0;
	FIllArr(srcArr,Len1Arr);

	cout << "Array Of Elemnts : ";
	PrintArr(srcArr,Len1Arr);

	int destArr[100];
	int Len2Arr= 0;
	CopyArrusingAddNbrArr(srcArr,destArr,Len1Arr,Len2Arr);
	cout << "Array After Copy : ";
	PrintArr(destArr,Len2Arr);


	return 0;
}
