/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   hire_driver.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 12:05:19 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 12:15:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Print(int Age,string DriverLicence)
{
	if (Age >= 21 && DriverLicence == "yes")
	{
		cout << "Congratulation you're Hired\n";
	}else{
		cout << "We are sorry,You're not accepted\n";
	}
}
int main()
{
	int Age;
	string DriverLicence;
	cout << "please entre you're Age :\n";
	cin >> Age;
	cout << "please do you have a Driver Licence :\n";
	cin >> DriverLicence;
	Print(Age,DriverLicence);

	return 0;
}
