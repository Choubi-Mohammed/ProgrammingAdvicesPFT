/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   problem43.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/06 12:39:44 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/06 12:59:29 by shobeedev            tfaaty fi l3oolaa   */
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
	cout << "Please enter the length : ";
	cin >> len;

	int i =0;
	while(i < len)
	{
		arr[i] = RandomNumber(-100,100);
		i++;
	}
}

int CountPosnumberArr(int arr[],int len)
{
	int i = 0;
	int sum = 0;
	while(i < len)
	{
		if (arr[i] > 0)
			sum++;
		i++;
	}
	return sum;
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
	int arr[100],len;
	FillArr(arr,len);

	cout << "Array Element : ";
	PrintArr(arr,len);

	cout << "Positive Number Count is : " << CountPosnumberArr(arr,len) << endl;

	return 0;
}
