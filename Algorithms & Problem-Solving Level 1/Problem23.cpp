/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem23.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/26 17:31:45 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/26 17:45:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from + 1) + from;
	return RandomNumber;
}

void FillArrayWithRanNbr(int arr[],int &len)
{
	cout << "Please enter length Array : ";
	cin >> len;
	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNumber(1,100);
		i++;
	}
}

int MaxOfArr(int arr[],int len)
{
	int i = 0;
	int MaxOfArr = 0;
	while(i < len)
	{
		if(MaxOfArr < arr[i])
			MaxOfArr = arr[i];
		i++;
	}
	return MaxOfArr;
}

void PrintAll(int arr[],int len)
{
	FillArrayWithRanNbr(arr,len);
	cout << "Array of Elements : ";
	int i = 0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
	cout << "The Max Of Number is : " << MaxOfArr(arr,len) <<  endl;
}
int main()
{
	srand((unsigned) time(NULL));
	int arr[100],len;
	PrintAll(arr,len);

	return 0;
}
