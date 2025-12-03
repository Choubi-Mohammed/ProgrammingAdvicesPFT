/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem35.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/03 21:12:23 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/03 21:28:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int FillAndRetLen(int arr[])
{
	int i = 0;
	bool AddOrNot = false;
	do
	{
		cout << "Please neter a number : ";
		cin >> arr[i];
		cout << "Do you want to Add More or Not ? YES => 1, NO => 0 : ";
		cin >> AddOrNot;
		i++;
	}while(AddOrNot == true);
	return i;
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
	int arr[100];
	int len = FillAndRetLen(arr);

	cout << "\nArray Length : " << len << endl;
	cout << "Array Elements : ";
	PrintArr(arr,len);

	return 0;
}
