/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   PrefectNbr.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/16 16:52:59 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/16 17:21:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumbers(int &from,int &to)
{
	cout << "please entre from :";
	cin >> from;
	cout << "please entre to :";
	cin >> to;
}
void PrefectNbr(int from,int to)
{
	int i = from;
	cout << "\n\nthe Perefect Number Between " << from << " and " << to << " are : ";
	while(i <= to)
	{
		int sum = 0;
		int j = from;
		while(j < i)
		{
			if(i % j ==0)
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
	int from,to;
	ReadNumbers(from,to);
	PrefectNbr(from,to);

	return 0;
}
