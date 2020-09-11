#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pleum(char s1[])
{
	char *p=s1;
	while(*p!='\0')
	{
		if((*p>='A') && (*p<='Z'))
		{
			printf("%c",*p);
		}
		p+=1;
	}
}
int main()
{
	char str[1000];
	scanf("%s",str);
	pleum(str);
	return 0;
}
