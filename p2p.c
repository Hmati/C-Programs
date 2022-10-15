#include<stdio.h>

int main()
{
	int row = 0;

	char *arr[5] = {"hellen","hellen","mati","mati","hellen"};

	char **ptr = NULL;

	ptr = arr;

	for (row = 0;row < 5;row++)
	{
		printf("%s\n", ptr[row]);
	}
	return 0;
}
