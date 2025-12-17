/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   short_if.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/17 17:00:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/17 17:03:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int Mark;
	cout << "Please enter Your Mark ? ";
	cin >> Mark;
	string res = "";
	//normal if
	if(Mark >= 50)
		res = "PASS\n";
	else
		res = "FAIL\n";

	cout << res;

	//short if
	res = (Mark >= 50) ? "PASS\n" : "FAIL\n";
	cout << res;

	return 0;
}
