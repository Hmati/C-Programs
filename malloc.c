#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_strcat(const char *str1,const char *str2)
{
	size_t s1,s2,s3,i=0;
	char *a;

	s1 = strlen(str1);
	s2 = strlen(str2);
	s3 = s1 +s2+1;
	a = malloc(s3);

	while (*str1 != '\0')
	{
	a[i] = *str1;
	str1++;
	i++;
	}
        while (*str2 !='\0')
	{
		a[i]=*str2;
		str2++;
		i++;
	}
	
	a[i] ='\0';

	return a;
}

int main (void)
{
	char *str = my_strcat("Hellena mati","Sereena zuri ");
		printf("%s\n",str);
	free(str);
	return 0;
}
