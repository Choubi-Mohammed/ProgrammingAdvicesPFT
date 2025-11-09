/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   continue_state.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/09 18:01:37 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/09 18:14:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
	int nbr;
	int i = 1;
	int sum = 0;
	while(i <= 5)
	{
		cout << "ente a number " ;
		cin >> nbr;
		i++;
		if(nbr > 50)
			continue;
		sum = sum +nbr;
	}
	cout << "the sum is " << sum << endl;
}
