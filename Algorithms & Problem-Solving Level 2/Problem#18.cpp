/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#18.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/22 18:46:33 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/22 19:08:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int rando_int(int from,int to)
{
	int rando_int = rand() % (to - from + 1)+from;
	return rando_int;
}

void fill2darr(int arr[][100],int lenRow,int lenCol)
{
	int i =0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			arr[i][j] = rando_int(1,10);
			j++;
		}
		i++;
	}
}

void Print2dArr(int arr[][100],int lenRow,int lenCol)
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

bool check_exist(int arr[][100],int lenRow,int lenCol,int nbr)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(arr[i][j] == nbr)
				return true;
			j++;
		}
		i++;
	}
	return false;
}

void Print_Reapeat_nbr(int arr1[][100],int arr2[][100],int lenRow,int lenCol)
{
	printf("\nIntersceted number are : ");
	int i = 0;
	while(i<lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(check_exist(arr2,lenRow,lenCol,arr1[i][j]) == true)
				printf("%d\t",arr1[i][j]);
			j++;
		}
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int lenRow, lenCol;
	int arr1[100][100],arr2[100][100];

	printf("Enter row and col :\n");
	scanf("%d %d",&lenRow,&lenCol);


	fill2darr(arr1,lenRow,lenCol);
	fill2darr(arr2,lenRow,lenCol);

	printf("Matrix 1 :\n");
	Print2dArr(arr1,lenRow,lenCol);
	printf("Matrix 2 : \n");
	Print2dArr(arr2,lenRow,lenCol);

	Print_Reapeat_nbr(arr1,arr2,lenRow,lenCol);

	return 0;
}
