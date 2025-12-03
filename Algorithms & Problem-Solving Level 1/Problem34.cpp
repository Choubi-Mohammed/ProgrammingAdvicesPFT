/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem34.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/03 19:04:11 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/03 19:40:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

void ReadLen(int &len)
{
	cout << "nter the length : ";
	cin >> len;
}

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from - 1) + from;
	return RandomNumber;
}

void FillArr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}
void readSearchNbr(int &SearchNbr)
{
	cout << "Please enter the number to search : ";
	cin >> SearchNbr;
}

int FindInedxNumber(int arr[],int len,int seaarchnbr)
{
	int i = 0;
	while(i < len)
	{
		if (arr[i] == seaarchnbr)
			return i;
		i++;
	}
	return -1;
}
bool isNumberINArr(int arr[],int len,int seaarchn)
{
	return FindInedxNumber(arr,len,seaarchn) != -1;
}

void PrintFoudOrNot(bool res)
{
	if ( res == true)
		cout << "Yes, the number is found.\n";
	else
		cout << "No, The number is not found.\n";
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
	srand((unsigned)time(NULL));
	int arr[100],len,seaarchn;
	ReadLen(len);

	FillArr(arr,len);
	cout << "Element of Array : ";
	PrintArr(arr,len);

	readSearchNbr(seaarchn);
	PrintFoudOrNot(isNumberINArr(arr,len,seaarchn));

	return 0;
}
