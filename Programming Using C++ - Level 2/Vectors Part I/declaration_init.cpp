/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   declaration_init.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 09:59:48 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 10:09:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//syntaxe
	//vector <type> vName = {};
	//declaration
	vector <int> vNbr;
	vNbr = {7,9,8,44,6};

	cout << "Number of Vector : ";
	int counter = 0;
	//ranged loop
	//when we use this init int n : range int ranged loop,
	//we take just a copy of a number froom tis range, so
	//this is mehtod is slow than this mehtod,
	//we should use reference like int &n : range.
	for(int &n : vNbr)
	{
		cout << n << " ";
		counter++;
	}

	cout << "\ncounter in ranged loop : " << counter << endl;
	return 0;
}
