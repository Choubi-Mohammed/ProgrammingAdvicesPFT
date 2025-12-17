/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Bitwise_AND_opr.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/17 19:42:28 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/17 19:52:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	//exp 1 :
	//number = 15 in binary = 00001111;
	//number = 17 in binary = 00010001;
   //ila drna comp binathom = 00000001;
   //so the res of binary in decimal is = 1;
	cout << "Result : " << (15 & 17) << endl;

	//exp 2 :
	//number = 45, binary = 00101101;
	//number = 78, binary = 01001110;
	//comparition         = 00001100;
	//the res in decimal  = 12;
	cout << "Result : " << (45 & 78) << endl;

	return 0;
}
