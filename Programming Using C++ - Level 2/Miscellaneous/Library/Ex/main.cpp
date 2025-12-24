/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   main.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/24 12:35:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/24 12:36:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/lib.h"
using namespace std;

int main()
{
    cout << "== tt_sum ==" << endl;
    cout << "5 + 3 = " << tt_sum(5, 3) << " (expected 8)" << endl;
    cout << "-2 + 10 = " << tt_sum(-2, 10) << " (expected 8)" << endl;

    cout << "\n== tt_isEven ==" << endl;
    cout << "4 -> " << tt_isEven(4) << " (expected 1)" << endl;
    cout << "7 -> " << tt_isEven(7) << " (expected 0)" << endl;

    cout << "\n== tt_max ==" << endl;
    cout << "max(10, 3) = " << tt_max(10, 3) << " (expected 10)" << endl;
    cout << "max(-5, -2) = " << tt_max(-5, -2) << " (expected -2)" << endl;

    cout << "\n== tt_fact ==" << endl;
    cout << "5! = " << tt_fact(5) << " (expected 120)" << endl;
    cout << "0! = " << tt_fact(0) << " (expected 1)" << endl;

    cout << "\n== tt_pow ==" << endl;
    cout << "2^3 = " << tt_pow(2, 3) << " (expected 8)" << endl;
    cout << "5^0 = " << tt_pow(5, 0) << " (expected 1)" << endl;

    cout << "\n== tt_isPrim ==" << endl;
    cout << "2 -> " << tt_isPrim(2) << " (expected 1)" << endl;
    cout << "9 -> " << tt_isPrim(9) << " (expected 0)" << endl;
    cout << "17 -> " << tt_isPrim(17) << " (expected 1)" << endl;

    cout << "\n== tt_abs ==" << endl;
    cout << "abs(-10) = " << tt_abs(-10) << " (expected 10)" << endl;
    cout << "abs(7) = " << tt_abs(7) << " (expected 7)" << endl;

    return 0;
}

