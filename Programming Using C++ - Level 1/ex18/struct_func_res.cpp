/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   struct_func_res.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 19:29:40 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 19:55:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct stInfo{
	string firstName;
	string lastName;
	int age;
	string phone;
};

void ReadInfo(stInfo &Per)
{
	cout << "please entre firstName :\n";
	cin >> Per.firstName;
	cout << "please entre lastName :\n";
	cin >> Per.lastName;
	cout << "please entre you're age :\n";
	cin >> Per.age;
	cout << "please entre your phone :\n";
	cin >> Per.phone;
}
void PrintInfo(stInfo Per)
{
	cout << "\n**************************************************\n";
	cout << "First Name : " << Per.firstName << endl;
	cout << "Last Name : " << Per.lastName << endl;
	cout << "Age : " << Per.age << endl;
	cout << "Phone : " << Per.phone << endl;
	cout << "n**************************************************\n";

}
int main()
{
	stInfo Per1;
	ReadInfo(Per1);
	PrintInfo(Per1);
	return 0;
}
