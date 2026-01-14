/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   arr_new_del.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 13:23:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 13:37:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "please enter how many student do you have ?";
	cin >> num;

	float *ptr = new float[num];
	int i = 0;
	cout << "enter grades os student : \n";
	while(i < num)
	{
		cout << "student " << i + 1 << " : ";
		cin >> *(ptr + i);
		++i;
	}
	cout << "\n\n";
	cout << "Displaying the gardes of student : \n";
	int j = 0;
	while (j < num)
	{
		cout << "student " << j+1 << " : " << *(ptr + j) << endl;
		++j;
	}
	delete[] ptr;
}
