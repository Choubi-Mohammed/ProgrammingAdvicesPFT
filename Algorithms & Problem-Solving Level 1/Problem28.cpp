/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem28.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/29 10:49:33 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/29 11:23:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
	int RandomNumber = rand() % (to - from + 1) + from;
	return RandomNumber;
}

void FillArray(int arr[],int &len)
{
	cout << "Please enter a length : ";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}

bool PrimOrNot(int number)
{
	if(number <= 1)
		return false;
	int i = 2;
	int Round = number / 2;
	while(i <= Round)
	{
		if (number % i == 0)
			return false;
		i++;
	}
	return true;
}

int CopyArrPrimes(int srcArr[],int destArr[],int len)
{
	int i = 0;
	int counter = 0;
	while(i < len)
	{
		if(PrimOrNot(srcArr[i]) == true)
		{
			destArr[counter] = srcArr[i];
			counter++;
		}
		i++;
	}
	return counter;
}

void PrintArr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));
	int srcArr[100],destArr[100],len;
	FillArray(srcArr,len);
	int lenPrimNbr = CopyArrPrimes(srcArr,destArr,len);

	cout << "Array 1 Element : ";
	PrintArr(srcArr,len);

	cout << "Array of Prim number :";
	PrintArr(destArr,lenPrimNbr);

	return 0;
}
