/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   forlopp_arr.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/06 17:25:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/06 19:22:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadLen(int &len)
{
	cout << "please entre len do you wnet to store ?";
	cin >> len;
}
void ReadArr(int arr[],int number)
{
	cout << "pleae entre number " << number << " ? ";
	cin >> arr[number];
}
int sumOfnbr(int arr[],int len)
{
	int sum = 0;
	for (int i = 1;i <= len;i++)
	{
		ReadArr(arr,i);
		sum = sum + arr[i];
	}
	cout << "the sum of these numbers is " << sum << endl;
	return sum;
}
float avgOfArr(int arr[],int len)
{
	float avg = sumOfnbr(arr,len) / len;
	return avg;
}
void printavg(float avg)
{
	cout << "the avrage of these numbers is : " << avg<< endl ;
}
int main()
{
	int len;
	int arr[len];
	ReadLen(len);
	printavg(avgOfArr(arr,len));

}
