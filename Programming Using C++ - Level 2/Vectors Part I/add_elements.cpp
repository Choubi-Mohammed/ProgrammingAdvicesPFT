/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   add_elements.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 12:02:46 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 12:07:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumbers;

	//add element to vNumbers
	vNumbers.push_back(4);
	vNumbers.push_back(7);
	vNumbers.push_back(1);
	vNumbers.push_back(20);
	vNumbers.push_back(9);

	for(int &n : vNumbers)
		cout << n << endl;

	return 0;
}


