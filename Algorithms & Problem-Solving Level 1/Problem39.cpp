/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   distinictN.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 11:32:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 11:50:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void FillArr(int src[],int &lensrc)
{
	cout << "please enter Length : ";
	cin >> lensrc;

	int i = 0;
	while(i < lensrc)
	{
		cout << "srcArr[" << i+1 << "] : ";
		cin >> src[i];
		i++;
	}
}
int FindNPosArr(int number,int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		if(number == arr[i])
			return i;
		i++;
	}
	return -1;
}
bool IsNumberInarr(int number,int arr[],int len)
{
	return FindNPosArr(number,arr,len) != -1;
}
void AddElementArr(int number,int arr[],int &len)
{
	len++;
	arr[len-1] = number;
}
void CopyDistinitNumber(int src[],int dest[],int lensrc,int &lendest)
{
	int i = 0;
	while(i < lensrc)
	{
		if (!IsNumberInarr(src[i],dest,lendest))
			AddElementArr(src[i],dest,lendest);
		i++;
	}
}
void PrintArr(int arr[],int len)
{
	int i =0;
	while(i < len)
	{
		cout << arr[i] <<" ";
		i++;
	}
	cout << "\n\n";
}
int main()
{
	int src[100],lensrc = 0;
	int dest[100],lendest = 0;

	FillArr(src,lensrc);

	cout << "Src Array Element : ";
	PrintArr(src,lensrc);

	CopyDistinitNumber(src,dest,lensrc,lendest);

	cout << "Disinitc Number : ";
	PrintArr(dest,lendest);

	return 0;
}
