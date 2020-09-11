#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 void ttt(char gg[])
 {
 	char *p=gg;
 	    while(*p != '\0')
    {
    	if((*p>='a') && (*p<='z'))
    	{
    		printf("%c",*p);
    	}
    	if((*p>='A')&&(*p<='Z'))
    	{
    		printf("%c",*p);
    	}
    	p++;
    }
 }

int main()
{
	char str[1000];
	scanf("%s",str);
	ttt(str);
return 0; 	
}

