/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   vector_access_element.cpp                              |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 17:10:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 17:14:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vec = {42,22,1337,23};

	cout << "Using => at() : \n";
	cout << vec.at(3) << endl;
	cout << vec.at(0) << endl;

	cout << "Using => [] \n";
	cout << vec[3] << endl;
	cout << vec[0] << endl;

	return 0;
}
