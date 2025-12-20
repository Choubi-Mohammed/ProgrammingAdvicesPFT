/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   print_nbr.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/20 12:41:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/20 12:53:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void print_nbr(int min,int max)
{
	if(max >= min)
	{
		cout << max << endl;
		print_nbr(min,max-1);
	}
}

int main()
{
	print_nbr(1,10);
	return 0;
}
