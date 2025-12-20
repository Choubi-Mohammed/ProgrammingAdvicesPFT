/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   factorail_number.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/20 13:09:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/20 13:13:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int fact(int num)
{
	if(num == 0)
		return 1;
	return (num * fact(num - 1));
}

int main()
{
	cout << fact(5) << endl;

	return 0;
}
