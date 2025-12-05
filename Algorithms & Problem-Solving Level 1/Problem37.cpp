/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem37.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/05 19:06:05 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/05 19:22:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from - 1) + from;
	return RandomNumber;
}

void FillArr(int arr[],int &len)
{
	cout << "Length = ";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		arr[i] =  RandomNumber(1,100);
		i++;
	}
}
void AddElementArr(int number,int dest[],int &lendest)
{
	lendest++;
	dest[lendest-1] = number;
}
void CopyOddNumber(int src[],int dest[],int lensrc,int &lendest)
{
	int i = 0;
	while(i < lensrc)
	{
		if (src[i] % 2 != 0)
		{
			AddElementArr(src[i],dest,lendest);
		}
		i++;
	}
}
void PrinArr(int arr[],int len)
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
	int src[100];
	int lensrc ;

	FillArr(src,lensrc);
	cout << "Array Element : ";
	PrinArr(src,lensrc);

	int dest[100];
	int lendest = 0;
	CopyOddNumber(src,dest,lensrc,lendest);
	cout << "Copy Odd Number From Array : ";
	PrinArr(dest,lendest);

	return 0;
}
