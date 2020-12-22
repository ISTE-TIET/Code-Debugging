#include<stdio.h>
int n;
void transpose(int arr[n][n],int n)
{
	int tra[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			tra[i][j]=arr[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=tra[i][j];
		}
	}

}
int main()
{
	int i,j;
	printf("Enter the order of matrix\n");
	scanf("%d",&n);
	int arr[10][10];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("element at a%d%d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	transpose(arr,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
