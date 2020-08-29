#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void xuly(int bat)
{
	signal(SIGINT, xuly);
	printf("Ban da nhan to hop phim CTRL+C\n");
}

int main()
{
	int count=0;
	signal(SIGINT, xuly);
	while(1)
	{
		printf("Chay vo tan....\n");
		sleep(1);
	}
}
