/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem24.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/26 18:04:09 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/26 18:29:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNbr(int from,int to)
{
	int RandomNbr = rand() % (to - from +1) +from ;
	return RandomNbr;
}

void FillArray(int arr[],int &len)
{
	cout << "enter the size Array :";
	cin >> len;

	int i = 0;
	while(i < len)
	{
		arr[i] = RandomNbr(1,100);
		i++;
	}
}
int MinOfArr(int arr[],int len)
{
	int i = 0;
	int MinOfArr = arr[i];
	while(i < len)
	{
		if(MinOfArr > arr[i])
			MinOfArr = arr[i];
		i++;
	}
	return MinOfArr;
}

void Print(int arr[],int len)
{
	FillArray(arr,len);
	cout << "Array Of Elements : ";
	int i = 0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n\n";
	cout << "Min Of Array : " << MinOfArr(arr,len) << endl;
}

int main()
{
	// Seed the random number generator with the current time.
    // This ensures that different random numbers are generated on each run.
	srand((unsigned) time(NULL));
	int arr[100],len;
	Print(arr,len);

	return 0;
}
