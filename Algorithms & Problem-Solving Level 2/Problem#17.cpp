/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#17.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 18:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/22 18:38:01 by shobeedev            tfaaty fi l3oolaa   */
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
bool check_nbr_exists(int arr[][100],int lenRow,int lenCol,int nbr)
{
	int i = 0;
	int counter = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if (arr[i][j] == nbr)
				return true;
			j++;
		}
		i++;
	}
	return false;;
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
	printf("\nMatrix : \n");
	Print2Darray(arr,lenRow,lenCol);

	if(check_nbr_exists(arr,lenRow,lenCol,nbr) == true)
		printf("Yes,it is there.\n");
	else
		printf("No,it Not there.\n");

	return 0;
}
