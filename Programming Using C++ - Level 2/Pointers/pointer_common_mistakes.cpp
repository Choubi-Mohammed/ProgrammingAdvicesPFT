/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pointer_common_mistakes.cpp                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 10:45:35 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/29 11:02:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int x, * p;

	// Wrong!
	// p is an address but x is not
	p = x;

	// Correct!
	// p is an address and so is &x
	p = &x;

	// Wrong!
	// &x is an address
	// *p is the value stored in &x
	*p = &x;

	// Correct!
	// *p is the value and so x
	*p = x;

	return 0;
}
