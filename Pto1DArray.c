#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row = 0;

	char arr [5][10]= {"hellen","mati","zuri","wambui","ndanu"};
	char (*Arrptr)[10]= NULL;

	//initialize pointer to array 
	Arrptr = arr;

	//loop for column 
	for (row = 0;row < 5 ;row ++)
	{
		printf("%s\n",Arrptr[row]);
	}
	return 0;
}
				
