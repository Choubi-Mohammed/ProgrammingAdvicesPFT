/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#11.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 15:37:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/20 17:53:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_int(int from,int to)
{
	int random_int = rand() % (to - from + 1) + from;
	return random_int;
}

void Fill2DArray(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			arr[i][j] = random_int(1,10);
			j++;
		}
		i++;
	}
}

void Print2DArray(int arr[][100],int lenRow,int lenCol)
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

int SumOfMatrix(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	int sum = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			sum += arr[i][j];
			j++;
		}
		i++;
	}
	return sum;
}
bool CompMatrices(int Mat1Sum,int Mat2Sum)
{
	return (Mat1Sum == Mat2Sum);
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[100][100],arr2[100][100];
	int lenRow,lenCol;

	printf("Please Enter the Len of Row and Coloms :\n");
	scanf("%d %d",&lenRow,&lenCol);


	Fill2DArray(arr1,lenRow,lenCol);
	Fill2DArray(arr2,lenRow,lenCol);

	printf("\nMatrix 1 :\n");
	Print2DArray(arr1,lenRow,lenCol);

	printf("\nMatrix 2 :\n");
	Print2DArray(arr2,lenRow,lenCol);

	int Mat1Sum = SumOfMatrix(arr1,lenRow,lenCol);
	int Mat2Sum = SumOfMatrix(arr2,lenRow,lenCol);

	if(CompMatrices(Mat1Sum,Mat2Sum) == true)
		printf("\nYes <Matrices are equal>\n");
	else
		printf("\nNo <Matrices are NOT equal>\n");

	return 0;
}
