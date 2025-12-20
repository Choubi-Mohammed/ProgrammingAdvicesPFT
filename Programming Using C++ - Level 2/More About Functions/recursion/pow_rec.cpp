/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pow_rec.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/20 12:55:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/20 13:01:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int pow_rec(int base,int exp)
{
	if(exp == 0)
		return 1;
	return base * pow_rec(base,exp-1);
}
int main()
{
	cout << pow_rec(5,3) << endl;
	return 0;
}
