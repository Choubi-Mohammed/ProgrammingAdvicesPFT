/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem02.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/18 19:59:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/18 20:10:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void ReadNumbers(int &start,int &end)
{
	cout << "Start = ";
	cin >> start;
	cout << "End = ";
	cin >> end;
}

bool PrimOrNot(int number)
{
	if (number <= 1)
		return false;
	int counter = 2;
	while(counter <= number/2)
	{
		if(number % counter == 0)
			return false;
		counter++;
	}
	return true;
}

void FindPrimNbr(int start,int end)
{
	int counter = start;
	cout << "\nThe Prime Number beteween " << start << " end " <<  end << " are : ";
	while(counter <= end)
	{
		if (PrimOrNot(counter) == true)
			cout << counter << " ";
		counter++;
	}
}

int main()
{
	int start,end;
	ReadNumbers(start,end);
	FindPrimNbr(start,end);


	return 0;
}
