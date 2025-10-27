/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   enum.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 17:47:16 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 18:09:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum Color {Blue, Red, Yallow, Green};
enum Direction {North, South, East, Weast};
enum Week {Sat,Sun,MOn,Tue,Wed,Thu,Fri};
enum Gender {Man,Woman};
enum Status {Single,Married};

int main()
{

	Color MyColor = Color::Red;
	Direction MyDir = Direction::North;
	Week Today = Week::Sun;
	Gender MyGen = Gender::Man;
	Status Myst = Status::Single;

	cout << "***********************************\n";
	cout << "My Color : " << MyColor << endl;
	cout << "Direction : " << MyDir << endl;
	cout << "Today : " << Today << endl;
	cout << "My Gender : " << MyGen << endl;
	cout << "Satatus : " << Myst << endl;
	cout << "***********************************\n";


	return 0;


}
