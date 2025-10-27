/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   nested_str_en.cpp                                      |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 18:39:33 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 18:51:17 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum enColor {Red, Blue, Green};
enum enGender {Male, Female};
enum enStatus {Single, Married};

struct stCantactInfo{
	string email;
	string number;
}

struct stInfo{
	string FullName;
	int Age;
	string adress;
}

struct stPerson{
	stInfo Info;
	stCantactInfo CantactInfo;
	enGender Gender;
	enStatus Status;
	enColor FavColor;
}

int main()
{
	stPerson p1;

	p1.Info.FullName = "Mohammed choubi";
	p1.Info.Age = 21;
	p1.Info.adress = "DR El kelaa des sraghna";

	p1.CantactInfo.email = "choubimohammed@gamil.com";
	p1.CantactInfo.number = "+212 636404456";

	p1.Gender = enGender::Male;
	p1.Status = enStatus::Single;
	p1.FavColor = enColor::Red;

	return 0;
}
