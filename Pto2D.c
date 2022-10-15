#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row =0;

	char arr [5][10]={"hellen","hellen","hellen","hellen","hellen"};

	char (*ptr)[5][10] = NULL;

        ptr = &arr;

	for (row = 0;row <5;row++)
	{
		printf("%s\n",(*ptr)[row]);
	}
	return 0;
}
