/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   forlopp_arr_optmzed.cpp                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/07 16:58:44 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/07 17:11:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


void ReadArr(int arr[],int &len)
{
	cout << "please entre the lentgh : ";
	cin >> len;
	for(int i = 0;i <= len-1;i++)
	{
		cout << "entre number " << i+1 << " :";
		cin >> arr[i];
	}
	cout << "\n";
}
void PrintArr(int arr[],int len)
{
	for(int i = 0;i <= len-1;i++)
	{
		cout << "Number arr[" << i << "] = " << arr[i] << endl;
	}
}
int CalcSumOfArr(int arr[],int len)
{
	int sum = 0;
	for(int i = 0;i <= len-1;i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}

float CalcAvgOfArr(int arr[],int len)
{
	float avg = CalcSumOfArr(arr,len) / len;
	return avg;
}

int main()
{
	int len;
	int arr[len];
	ReadArr(arr,len);
	PrintArr(arr,len);

	cout << "\n**************************************\n";
	cout << "The sum is : " << CalcSumOfArr(arr,len) << endl;
	cout << "The avg is : " << CalcAvgOfArr(arr,len) << endl;

	return 0;
}
