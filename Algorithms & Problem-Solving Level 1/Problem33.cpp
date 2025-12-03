/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem33.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/03 17:34:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/03 17:49:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RetLen()
{
	int len;
	cout << "Please enter the length : ";
	cin >> len;

	return len;
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

void SearchNbr(int arr[],int len,int &SearchNbr)
{
	cout << "Please enter to search : ";
	cin >> SearchNbr;

	int i = 0;
	cout << "Number you looking for is : " << SearchNbr << endl;
	while(i < len)
	{
		if (arr[i] == SearchNbr)
		{
			cout << "The number found in position in array: " << i << endl;
			cout << "The Number found its order is : " << i+1 << endl;
			break;
		}
		i++;
	}
}

void PrintArr(int arr[],int len)
{
	int i= 0;
	while(i < len)
	{
		cout <<arr[i] << " ";
		i++;
	}
	cout << "\n\n";
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100],len,SearchN;
	len = RetLen();
	FillArr(arr,len);
	cout << "Array fo Lements is : ";
	PrintArr(arr,len);

	SearchNbr(arr,len,SearchN);

	return 0;
}
