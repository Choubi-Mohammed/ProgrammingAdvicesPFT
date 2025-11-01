/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   arr_func.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 10:02:36 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 10:08:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNotes(int arr[])
{
	cout << "please entre notes :\n";
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
}

float CalcAvg(int arr[])
{
	float Avg = (arr[0] + arr[1] + arr[2]) / 3;
	return Avg;
}

int main()
{
	int notes[3];
	ReadNotes(notes);
	cout << "************************\n";
	cout << "the Avrage of this notes is : " << CalcAvg(notes) << endl;

}
