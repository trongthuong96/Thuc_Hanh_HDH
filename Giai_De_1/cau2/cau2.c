#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

void cha(int doc[],int ghi[])
{
	char c;
	close(doc[1]);
	close(ghi[0]);
	while((c=getchar())>0)
	{
		write(ghi[1], &c, 1);
		read(doc[0], &c, 1);
		putchar(c);
	}
	close(doc[1]);
	close(ghi[0]);
}

void con(int doc[],int ghi[])
{
	char c;
	close(doc[1]);
	close(ghi[0]);
	while(read(doc[0], &c, 1) > 0)
	{
		if(isascii(c) && islower(c))
			c=toupper(c);
		write(ghi[1], &c, 1);
	}
	close(doc[0]);
	close(ghi[1]);
}

int main()
{
	int ong1[2];
	int ong2[2];
	int pid;
	pipe(ong1);
	pipe(ong2);
	pid= fork();
	switch(pid)
	{
		case -1:
			perror("error");
			return;
		case 0:
			con(ong1,ong2);
		default:
			cha(ong2,ong1);
	}
	return 0;
}
