#include<iostream>
#include<cstdio>
using namespace std;
string s;
void rotate(string a, int key,int len){
	for (int i = 0; i < len; ++i)
	{
		/* code */
		for (int j =0; j < len; ++j)
		{
			printf("%c",a[(i+j)%len] );
			
		}
		cout<<endl;
	}
	// cout<<a;


}
int main(int argc, char const *argv[])
{
	
	cin>>s;
	int n=s.length();
	rotate(s,1,n);
	
	return 0;
}