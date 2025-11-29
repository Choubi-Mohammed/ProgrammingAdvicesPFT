/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem27.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/29 10:24:03 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/29 10:38:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from + 1 ) + from;
	return RandomNumber;
}

void FillArray(int arr[],int &len)
{
	cout << "Please enter a length :";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}

void CopyArray(int srcArr[],int destArr[],int len)
{
	int i = 0;
	while(i < len)
	{
		destArr[i] = srcArr[i];
		i++;
	}
}

void PrintArr(int arr[],int len)
{
	int i = 0;
	while(i< len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int srcArr[100],destArr[100],len;

	FillArray(srcArr,len);
	CopyArray(srcArr,destArr,len);

	cout << "Array 1 Elements : ";
	PrintArr(srcArr,len);

	cout << "Array 2 Elements After Copy : ";
	PrintArr(destArr,len);

	return 0;

}
