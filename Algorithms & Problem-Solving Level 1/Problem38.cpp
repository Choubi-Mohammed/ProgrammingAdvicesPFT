/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem38.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/05 19:31:13 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/05 19:46:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from - 1) +from;
	return RandomNumber;
}

void FillArr(int arr[],int &len)
{
	cout << "Len = ";
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
		if(number % i == 0)
			return false;
		i++;
	}
	return true;
}

void AddElementArr(int number,int dest[],int &lendest)
{
	lendest++;
	dest[lendest-1] = number;
}

void CopyPrimNumber(int src[],int dest[],int lensrc,int &lendest)
{
	int i = 0;
	while(i < lensrc)
	{
		if(PrimOrNot(src[i]) == 1)
			AddElementArr(src[i],dest,lendest);
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
	int src[100],lensrc;

	FillArr(src,lensrc);

	cout << "Array Element : ";
	PrinArr(src,lensrc);

	int dest[100],lendest = 0;
	CopyPrimNumber(src,dest,lensrc,lendest);

	cout << "Copy Prim Number From Array : ";
	PrinArr(dest,lendest);


	return 0;
}
