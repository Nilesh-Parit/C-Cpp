

#include <stdio.h>

int cal_len(char *);
int main()
{
	char a[]="PG-DAC";
	int result;
	result=cal_len(a);
	printf("The length of the string is:%d",result);
	
	return 0;
	
}

int cal_len(char *b)
{
	int len=0;
	int i;
	for(i=0;b[i]!='\0';i++)
	len++;
	
	return len;
}
