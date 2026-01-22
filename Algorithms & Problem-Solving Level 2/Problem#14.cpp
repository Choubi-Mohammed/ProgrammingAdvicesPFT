/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#14.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 18:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/22 17:25:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
using namespace std;

void Fill2DArray(int arr[][100],int lenRow,int lenCol)
{

	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			printf("2D Array Row = %d,Col = %d :",i+1,j+1);
			scanf("%d",&arr[i][j]);
			j++;
		}
		i++;
	}
}

void Print2Darray(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			printf("%0*d\t",2,arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
bool CheckIdentity(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i <lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(i == j && arr[i][j] != arr[i][j])
				return false;
			if(i != j && arr[i][j] != 0)
				return false;
			j++;
		}
		i++;
	}
	return true;
}

int main()
{
	int arr[100][100];
	int lenCol,lenRow;

	printf("Row = , Coloms = \n");
	scanf("%d %d",&lenRow,&lenCol);

	Fill2DArray(arr,lenRow,lenCol);

	Print2Darray(arr,lenRow,lenCol);

	if (CheckIdentity(arr,lenRow,lenCol) == true)
		printf("Identity.\n");
	else
		printf("Not Identity.\n");
}
