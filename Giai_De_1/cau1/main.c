#include<stdio.h>

int main()
{
	int n, a[100];
	printf("Nhap so luong phan tu mang: ");
	scanf("%d",&n);
	InputArray(a,n);
	Output(a,n);
	printf("\n");
	SoLe();
	printf("\n");
	return 0;
}
