/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem29.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/01 17:34:09 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/01 18:29:11 by shobeedev            tfaaty fi l3oolaa   */
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
void ReadLen(int &len)
{
	cout << "Please enter The length do you want : ";
	cin >> len;
}
void RandArr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}
void SumArr(int FirArr[],int SecArr[],int sumArr[],int len)
{
	int i = 0;
	while(i < len)
	{
		sumArr[i] = FirArr[i] + SecArr[i];
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
	int arr1[100],arr2[100],sumArr[100],len;
	ReadLen(len);
	RandArr(arr1,len);
	RandArr(arr2,len);

	cout << "Array 1 Elements : ";
	PrintArr(arr1,len);

	cout << "Array 2 Elements : ";
	PrintArr(arr2,len);

	SumArr(arr1,arr2,sumArr,len);
	cout << "Sum of Array 1 and 2 Elements : ";
	PrintArr(sumArr,len);


	return 0;
}
