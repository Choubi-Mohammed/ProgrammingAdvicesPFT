/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   avg_pass_fail.cpp                                      |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 12:22:07 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 12:30:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


void ReadMark(int arr[])
{
	cout << "please entre Mark 1 : \n";
	cin >> arr[0];
	cout << "please entre Mark 2 : \n";
	cin >> arr[1];
	cout << "please entre Mark 3 : \n";
	cin >> arr[2];
}

void PrintAvgPassFail(int arr[])
{
	int avg = (arr[0]+arr[1]+arr[2])/3;
	cout << "The Avrage of these Marks is : " << avg << endl;
	if (avg >= 50)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}

int main()
{
	int Marks[3];
	ReadMark(Marks);
	PrintAvgPassFail(Marks);

	return 0;
}
