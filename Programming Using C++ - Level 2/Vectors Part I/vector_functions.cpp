/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   vector_functions.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 19:50:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 19:58:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vnumbers;
	vnumbers.push_back(9);
	vnumbers.push_back(5);
	vnumbers.push_back(44);
	vnumbers.push_back(4);
	vnumbers.push_back();
	cout << "the first element in vector : " << vnumbers.front() << endl;//get the first element in vector
	cout << "the last element in vector : " << vnumbers.back() << endl;//get the last element in vector

	cout << "the size of the vector : " << vnumbers.size() << endl;//hady ka t3tina size() y3ny dakchy li 3amr fi memory ka t7sbo
	cout << "the capacity  of the vector : " << vnumbers.capacity() << endl;//hady la hady ka t3tik ch7al capacity dyalha kaml l3amr o khawy
	cout << "the check if vector is empty : " << vnumbers.empty() << endl;//hady ktrj3 lik true or false wach khawya wla la

	return 0;
}
