#include<stdio.h>
void SoLe()
{
	int i;
	printf("Cac so le tu 1 den 100 la:\n");
	for(i=1; i<101; i++)
	{
		if(i%2!=0)
			printf("%-4d",i);
	}
}
