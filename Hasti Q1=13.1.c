#include<stdio.h>

void main()
{
	FILE *ptrR,*ptrW;
	
	char n;
	
	ptrR = fopen("File1.txt","r");
	
	if(ptrR!=NULL)
	{
		printf("File opened...");
	}
	else
	{
		printf("File can't open...");
	}
	
	ptrW = fopen("new.c","w");
	
	if(ptrW!=NULL)
	{
		printf("File Created...");
	}
	else
	{
		printf("File can't created...");
	}
	
	n = fgetc(ptrR);
	while(n != EOF)
	{
		fprintf(ptrW,"%c",n);
		n = fgetc(ptrR);
	}
}
