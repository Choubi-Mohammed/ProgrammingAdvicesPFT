/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem03.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/19 17:32:42 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/19 17:50:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumbers(int &start,int &end)
{
	cout << "start : ";
	cin >> start;
	cout << "end : ";
	cin >> end;
}

void perfectNumber(int start,int end)
{
	cout << "\n\nThe Perefect Number between " << start << " and " << end << " are : ";
	int i = start;
	while(i <= end)
	{
		int sum = 0;
		int j = start;
		while(j < i)
		{
			if (i % j == 0)
				sum = sum + j;
			j++;
		}
		if (sum == i)
			cout << i << " ";
		i++;
	}
}

int main()
{
	int start,end;
	ReadNumbers(start,end);
	perfectNumber(start,end);

	return 0;
}
