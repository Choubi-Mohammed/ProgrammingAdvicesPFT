/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem18.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/24 18:33:37 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/24 19:10:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;
void ReadNumber(int &from,int &to)
{
	cout << "From = ";
	cin >> from;
	cout << "To = ";
	cin >> to;
}
int RandomNumber(int from,int to)
{
	int RandomN = rand() % (to - from + 1) + from;// this is range (to - from + 1) limit the range and + from is the start.
	return RandomN;
}

int main()
{
	srand((unsigned)time(NULL));// seed random generator
	int from,to;
	ReadNumber(from,to);
	cout << RandomNumber(from,to) << endl;
	cout << RandomNumber(from,to) << endl;


	return 0;
}
