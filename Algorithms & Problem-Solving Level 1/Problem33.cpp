/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem33.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/03 17:34:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/03 18:58:23 by shobeedev            tfaaty fi l3oolaa   */
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
int RetSearchnbr()
{
	int SearchN;
	cout <<"Please enter to search : ";
	cin >> SearchN;

	return SearchN;
}
int SearchNbr(int arr[],int len,int SearchNbr)
{

	int i = 0;
	while(i < len)
	{
		if (arr[i] == SearchNbr)
			return i;
		i++;
	}
	return -1;
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
	SearchN = RetSearchnbr();
	cout << "Number you loking for is : " << SearchN << endl;
	if(SearchNbr(arr,len,SearchN) != -1)
	{
		cout << "the number is found in position in Array : " << SearchNbr(arr,len,SearchN) << endl;
		cout << "The number is found in order : " << SearchNbr(arr,len,SearchN) + 1 << endl;
	}else
	{
		cout << "The number is not found !\n";
	}
	return 0;
}
