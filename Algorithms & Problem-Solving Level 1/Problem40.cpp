/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem40.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 11:59:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 12:25:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void FillArr(int arr[],int &len)
{
	cout << "Please enter the length : ";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		cout << "arr[" << i+1 << "] : ";
		cin >> arr[i];
		i++;
	}
}
void swap(int &nbr1,int &nbr2)
{
	int tmp;

	tmp = nbr1;
	nbr1 = nbr2;
	nbr2 = tmp;
}
void CopyArr(int src[],int dest[],int len)
{
	int i = 0;
	while(i < len)
	{
		 dest[i] = src[i];
		i++;
	}
}
void ReversArr(int arr[],int len)
{
	int i = 0;

	while(i <= len/2)
	{
		swap(arr[i],arr[len-1-i]);
		i++;
	}
}

void IsPlindromArr(int src[],int dest[],int len)
{
	CopyArr(src,dest,len);
	ReversArr(dest,len);
	int i =0;
	while(i < len)
	{
		if (src[i] != dest[i])
		{
			cout << "This is Array Not a Palindrom Array \n";
			return;
		}
		i++;
	}
	if(len > 1)
		cout << "This Array is a Palindrom\n";
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
	int src[100],dest[100],len;

	FillArr(src,len);

	cout << "Array element : ";
	PrintArr(src,len);

	IsPlindromArr(src,dest,len);

}
