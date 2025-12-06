/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem40.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 11:59:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 12:31:01 by shobeedev            tfaaty fi l3oolaa   */
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
bool IsPlindromArr(int arr[],int len)
{
	int i =0;
	while(i < len)
	{
		if(arr[i] != arr[len-1-i])
			return false;
		i++;
	}
	return true;
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
	int src[100],len;

	FillArr(src,len);

	cout << "Array element : ";
	PrintArr(src,len);

	if(IsPlindromArr(src,len)== true)
		cout << "A Palindrom Array \n";
	else
		cout << "Not A Palindrom Array \n";

	return 0;

}
