#include<stdio.h>
void Output(int a[], int n)
{
	int i;
	printf("Mang vua nhap la:\n");
	for(i=0;i<n;i++)
	{
		printf("%-4d",a[i]);
	}
}
