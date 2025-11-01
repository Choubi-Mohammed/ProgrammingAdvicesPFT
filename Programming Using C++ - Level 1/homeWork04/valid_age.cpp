/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   valid_age.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 12:32:30 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 12:35:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void valid_age(int age)
{
	if (age >= 18 && age <= 45)
		cout << "Valid Age\n";
	else
		cout << "Invalide Age\n";
}

int main()
{
	int age;
	cout << "please entre you're age : \n";
	cin >> age;
	valid_age(age);

	return 0;
}
