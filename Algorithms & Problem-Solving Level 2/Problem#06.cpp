/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#06.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/18 15:23:42 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/18 15:37:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
using namespace std;

void Ordered_Nbr(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	int counter = 1;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			arr[i][j] = counter;
			counter++;
			j++;
		}
		i++;
	}
}

void Print2DArr(int arr[][100],int lenRow,int lenCol)
{
	printf("the following is a %dx%d ordered number:\n",lenRow,lenCol);
	int i =0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			printf("%d\t",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int main()
{
	int arr[100][100];
	int lenRow,lenCol;

	printf("Enter The len of Row and Col: ");
	scanf("%d %d",&lenRow,&lenCol);

	Ordered_Nbr(arr,lenRow,lenCol);
	Print2DArr(arr,lenRow,lenCol);

	return 0;
}

