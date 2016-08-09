#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sqr(x) (x*x)
void printmat(char a[3][3]){
	system("clear");
	for (int i = 0; i < 3; ++i)
	{
		/* code */
		for (int j = 0; j < 3; ++j)
		{
			/* code */
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{
	int len=0;
	char s[10];
	scanf("%s",s);
	len=strlen(s);
	for (int i = 0; i < len; ++i)
	{
				
	}
	system("clear");	
	printf("\n");	
	for (int i = 0; i < len; ++i)
	{
		/* code */
		printf(" %c",s[i] );
	}
	printf("\n");
	for (int i = 0; i < len; ++i)
	{
		/* code */
		for (int j = 0; j<i; ++j)
		{
			/* code */
			printf(" ");
		}
		printf("  %c \n",s[i] );
	}
	printf("\n");
	for (int i = 0; i<len ; ++i)
	{
		/* code */
		for (int j = len-i; j>=0; --j)
		{
			/* code */
			printf(" ");
		}
		printf(" %c\n ",s[i] );
	}
		printf("\n");
	for (int j = 0; j<len;printf("\n"), ++j)
		{
			/* code */
			printf(" %c ",s[0]);

		}
	return 0;
}