/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem39.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/05 21:50:21 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/05 22:08:57 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void FillArr(int arr[],int &len)
{
	cout << "Len = ";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		cout << "Please enter elemnt [" << i+1 << "] : ";
		cin >> arr[i];
		i++;
	}
}
bool chekcNumberarr(int number,int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		if (number == arr[i])
			return false;
		i++;
	}
	return true;

}
int distinictarr(int src[],int dest[],int len)
{
	int i = 0;
	int j = 0;
	while(i < len)
	{
		if(chekcNumberarr(src[i],dest,len) == true )
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	return j;
}
void PrintArr(int arr[],int len)
{
	int i =0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n\n";
}
int main()
{
	int arr[100],len;
	FillArr(arr,len);

	cout << "Array element : ";
	PrintArr(arr,len);

	int dest[100];
	int lenDest = distinictarr(arr,dest,len);

	cout << "Disitinict Array : ";
	PrintArr(dest,lenDest);


}
