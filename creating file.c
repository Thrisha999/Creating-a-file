#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,sum;
	char c='x';
	char s[10];
	FILE *fp;
	fp=fopen("dept.txt","w");
	fprintf(fp,"welcome\n");
	fputs("csse-",fp);
	fputc('A',fp);
	fclose(fp);
}
