/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#16.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 18:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/22 18:16:18 by shobeedev            tfaaty fi l3oolaa   */
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
bool sparce_matrix(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	int zero = 0;
	int nbr = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if (arr[i][j] == 0)
				zero++;
			else
				nbr++;
			j++;
		}
		i++;
	}

	if(zero > nbr)
		return true;
	else
		return false;
}

int main()
{
	int arr[100][100];
	int lenCol,lenRow;

	printf("Row = , Coloms = \n");
	scanf("%d %d",&lenRow,&lenCol);

	Fill2DArray(arr,lenRow,lenCol);
	printf("\nMatrix : \n");
	Print2Darray(arr,lenRow,lenCol);

	if(sparce_matrix(arr,lenRow,lenCol) == true)
		printf("Yes, its a sparce matrix.\n");
	else
		printf("Not, its Not sparce matrix.\n");

	return 0;
}
