#include<stdio.h>
#define sqr(x) (x*x)
int main(int argc, char const *argv[])
{
	int x,y;
	scanf("%d %d",&x,&y);
	for (int i = x+1; i <=y ; ++i)
	{
		/* code */
		if(i%2==0){
			printf(" Even- %d ",i);
			printf(" Square- %d\n",sqr(i));
		}else
		{
			printf(" Odd- %d ",i );
			printf(" Square- %d\n",sqr(i));
		}
	}
	
	return 0;
}