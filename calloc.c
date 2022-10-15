#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int n;
	int* ptr;

	n = 5;
	printf("The elements are :%d\n",n);

	ptr = (int*)calloc(n,sizeof(int));

	if(ptr == NULL){
		printf("memory not allocated\n");
		exit (0);
	}
	else {
		printf("Memory allocated is");

		for (i=0;i<n;i++){
			ptr[i]=i+1;
		}
		printf("The elements are:");
		for(i=0;i<n;i++){
		printf("%d\n",ptr[i]);
		}
	}

	return 0;
}
