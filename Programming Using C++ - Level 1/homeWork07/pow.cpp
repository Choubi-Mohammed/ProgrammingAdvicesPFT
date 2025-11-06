/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pow.cpp                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/06 17:05:35 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/06 17:14:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(int &Number,int &M)
{
	cout << "please enter a Number :";
	cin >> Number;
	cout << "please entre M :";
	cin >> M;
}

int powOf(int Number,int M)
{
	int res = 1;
	for(int i = 1;i <= M;i++)
	{
		res = res * Number;
	}
	return res;
}
int main()
{
	int Number,M;
	ReadData(Number,M);
	cout << powOf(Number,M);
}

