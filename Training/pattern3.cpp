#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a=10,b=20,c=30;
	int *u,*e,*l;
	u=&a,e=&b,l=&c;
	int **v=&u,**f=&e,**m=&l;
	int ***w=&v;
	int ****x=&w;
	cout<<*x<<"  "<<****x<<endl;
	****x=(int ****)&v;
	cout<<****x;	
	return 0;
}