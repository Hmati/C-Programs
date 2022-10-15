#include<stdio.h>

int sum(int num1,int num2);
int sub(int num1, int num2);
int mult(int num1 ,int num2);
int div(int num1,int num2);

int main()
{
	int x,y,result,choice;

	int (*opr[4])(int,int);

       	opr[0]=sum;
	opr[1]=sub;
	opr[2]=mult;
	opr[3]=div;

	printf("Enter two integer numbers: ");
  	scanf("%d%d", &x, &y);
  	printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
  	scanf("%d", &choice);
  	result = opr[choice](x, y);
  	printf("%d", result);
	return 0;
}
int sum(int x, int y) {return(x + y);}
int sub(int x, int y) {return(x - y);}
int mult(int x, int y) {return(x * y);}
int div(int x, int y) {if (y != 0) return (x / y); 
else  return 0;}
