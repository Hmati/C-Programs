#include<stdio.h>
#include<stdlib.h>
int main (int argc , char **argv)
{
	int n;
	int m;
	
	n = atoi(argv[1]);
	m = atoi(argv[2]);

	printf("Arg 1 :%d\n Arg 2:%d\n",n ,m);
	return 0;
}
