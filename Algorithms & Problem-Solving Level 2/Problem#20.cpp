/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#20.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 18:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/25 18:13:49 by shobeedev            tfaaty fi l3oolaa   */
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
bool isPalindrom(int arr[][100],int Row,int lenCol)
{
	int i = 0;
	int midCol = lenCol / 2;
	while(i <  midCol)
	{
		if(arr[Row][i] != arr[Row][lenCol-i-1])
			return false;
		i++;
	}
	return true;
}
bool isPalindromMatrix(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		if(isPalindrom(arr,i,lenCol) != true)
			return false;
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
	printf("\nMatrix : \n");
	Print2Darray(arr,lenRow,lenCol);

	if(isPalindromMatrix(arr,lenRow,lenCol) == true)
		printf("YES,its a Palindrom matrix.\n");
	else if(isPalindromMatrix(arr,lenRow,lenCol) == false)
		printf("NO,its NOT a Palindrom matrix.\n");

	return 0;
}
