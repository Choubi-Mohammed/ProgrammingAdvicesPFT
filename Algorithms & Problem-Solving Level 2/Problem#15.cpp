/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#15.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 18:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/22 17:54:47 by shobeedev            tfaaty fi l3oolaa   */
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
int Count_nbr(int arr[][100],int lenRow,int lenCol,int nbr)
{
	int i = 0;
	int counter = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if (arr[i][j] == nbr)
				counter++;
			j++;
		}
		i++;
	}
	return counter;
}
int main()
{
	int arr[100][100];
	int lenCol,lenRow,nbr;

	printf("Row = , Coloms = \n");
	scanf("%d %d",&lenRow,&lenCol);

	Fill2DArray(arr,lenRow,lenCol);
	printf("enter the number :");
	scanf("%d",&nbr);
	printf("\nMatrix : ");
	Print2Darray(arr,lenRow,lenCol);

	printf("\nnumber %d is count in matrix is %d",nbr,Count_nbr(arr,lenRow,lenCol,nbr));

	return 0;
}
