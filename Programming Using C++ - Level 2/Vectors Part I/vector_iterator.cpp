/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   vector_iterator.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 17:34:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 17:38:49 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vec{42,1337,22,23};

	//declar iterator
	vector <int>::iterator iter;

	//use iterator with for loop
	for(iter = vec.begin();iter != vec.end();iter++)
		cout << *iter << " ";

	return 0;
}
