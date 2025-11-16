/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Prim_N_Rang.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/16 17:51:15 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/16 19:54:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumbers(int &from,int &to)
{
	cout << "frome => ";
	cin >> from;
	cout << "to => ";
	cin >> to;
}
bool PrimOrNot(int start,int number)
{
	int counter = start;
	while(counter < number)
	{
		if (number % counter == 0)
			return false;
		counter++;
	}
	return true;
}

void FindPrimNumber(int start,int end)
{
	if (start <= 1)
		start++;
	int counter =start;
	int sum = 0;
	while(counter <= end)
	{
		if (PrimOrNot(start,counter) == true)
		{
			sum++;
			cout << counter << " ";
		}
		counter++;
	}
	cout << "\n the Total Prime number is : " << sum << endl;
}

int main()
{
	int from,to;
	ReadNumbers(from,to);
	FindPrimNumber(from,to);

	return 0;
}
