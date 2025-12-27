/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   remove_elements.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 18:37:36 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 18:42:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vNumbers;

	//add element to vector
	vNumbers.push_back(14);
	vNumbers.push_back(4);
	vNumbers.push_back(7);
	vNumbers.push_back(9);

	//remove element using pop_back(),its remove the last in => last in, first out
	vNumbers.pop_back();//remove 9
	vNumbers.pop_back();//7
	//vNumbers.pop_back();//4
	//vNumbers.pop_back();//14

	cout << "Numbers : ";
	for(int &n : vNumbers)
		cout << n << " ";


	return 0;
}
