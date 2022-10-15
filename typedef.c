#include<stdio.h>

typedef struct employee{
	int salary;
	int id;
}emp;

int main()
{
	emp e1,e2;
	e1.salary = 5000;
	e2.salary =4000;
	e1.id=1;
	e2.id=2;

	printf("salary e1 is %d\n",e1.salary);
	return 0;
}
