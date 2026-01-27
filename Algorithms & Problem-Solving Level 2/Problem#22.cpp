/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#22.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/27 20:11:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/27 20:48:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
using namespace std;

int PrintFibSerRec(int nbr)
{
	//base case or condition to stop funciton
	if(nbr <= 1)
		return nbr;
	return (PrintFibSerRec(nbr - 1) + PrintFibSerRec(nbr - 2));
}
int main()
{
	for(int i = 1;i <= 10;i++)
		printf("%d\t",PrintFibSerRec(i));



}
