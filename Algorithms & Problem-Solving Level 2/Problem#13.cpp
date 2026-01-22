/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#13.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 18:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/22 17:11:08 by shobeedev            tfaaty fi l3oolaa   */
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
/*
bool checkCol(int arr[][100],int Row,int Col,int posSk)
{
	int i = 0;
	while(i < Col)
	{
		if (i == posSk)
		{
			i++;
			continue;
		}
		if (arr[Row][i] != 0)
			return false;
		i++;
	}
	return true;
}
bool CheckIdentity(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	int j = 0;
	while(i < lenRow)
	{
		if(arr[i][j] == 1)
		{
			if(checkCol(arr,i,lenCol,j) != true)
				return false;
			j++;
		}
		else
			return false;
		i++;
	}
	return true;
}*/
bool CheckIdentity(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i <lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(i == j && arr[i][j] != 1)
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
