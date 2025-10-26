/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   log_oper.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/26 10:16:19 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/26 10:54:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	bool res;

	res = (7 == 7) && (7 > 5);
	cout << res << endl;
	res = (7 == 7) && (7 < 5);
	cout << res << endl;
	res = (7 == 7) || (7 > 5);
	cout << res << endl;
	res = (7 == 7) || (7 < 5);
	cout << res << endl;
	res = !(7 == 7) || (7 > 5);
	cout << res << endl;
	res = (7 == 7) && !(7 > 5);
	cout << res << endl;


}
