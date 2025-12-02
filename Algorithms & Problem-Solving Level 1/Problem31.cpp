/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem31.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/02 19:42:51 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/02 21:28:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int ReturnLen()
{
	int len;
	cout << "Length : ";
	cin >> len;

	return len;
}

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from +1) + from;
	return RandomNumber;
}

void FillArrWithRandnbr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}
void CopyArr(int srcArr[],int destArr[],int len)
{
	int i = 0;
	while(i < len)
	{
		destArr[len - 1 - i] = srcArr[i];
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
	int srcArr[100],destArr[100];
	int len = ReturnLen();
	FillArrWithRandnbr(srcArr,len);
	cout << "Array 1 of elenemnts  : ";
	PrintArr(srcArr,len);

	CopyArr(srcArr,destArr,len);
	cout << "Reverse Array : ";
	PrintArr(destArr,len);

	return 0;
}
