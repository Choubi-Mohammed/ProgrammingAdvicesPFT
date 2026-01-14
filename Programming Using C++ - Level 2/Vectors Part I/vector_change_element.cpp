/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   vector_change_element.cpp                              |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 17:19:07 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 17:33:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vec{42,1337,22,23};

	cout << "vector element : ";
	for(const int &i : vec)
		cout << i << " ";
	cout << endl;

	cout << "vector element after change i : ";
	for(int &i : vec)
	{
		i = 77;
		cout << i << " ";
	}
	cout << endl;

	cout << "update the element : ";
	vec.at(0) = 42;
	vec[1] = 1337;
	vec[2] = 22;
	vec.at(3) = 23;
	for(const int &i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}


