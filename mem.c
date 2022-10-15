#include<stdlib.h>
#include<stdio.h>

int main()
{
	int* ptr;
	int n;
	int i;

	printf("Enter a number:");
	scanf("%d",&n);
	printf("Elements input %d\n:",n);

	ptr = (int*)malloc(n* sizeof(int));

	if (ptr==NULL){
	printf("Memory not allocated\n");
	exit(0);
	}
	else{
		printf("Memory allocated\n");

		for(i=0;i<n;i++){
			ptr[i]=i+1;
		}
	}

	printf("elements are:");
	for(i=0;i<n;i++){
		printf("%d\n",ptr[i]);
	}

	return 0;
}


