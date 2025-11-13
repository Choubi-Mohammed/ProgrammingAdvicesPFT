/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem8.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/13 17:17:18 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/13 17:30:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum enMark {Pass = 1,Fail = 2};

int ReadMark()
{
	int nbr;
	cout << "entre mark ?";
	cin >> nbr;

	return nbr;
}
enMark CheckMrak(int number)
{
	if(number > 50)
		return enMark::Pass;
	else
		return enMark::Fail;
}

void Print(enMark mark)
{
	if(mark == enMark::Pass)
		cout << "\nyou're pass the exam shell.\n";
	else
		cout << "\n you're didn't Pass the exam shell.\n";
}

int main()
{
	Print(CheckMrak(ReadMark()));

	return 0;
}
