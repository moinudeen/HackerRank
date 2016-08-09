#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	// char s[100],s1[100];
	// scanf("%s%s",s,s1);
	string s,s1;
	cin>>s>>s1;
	// if (strstr(strcat(s,s1),s1)!=NULL)
	// {
	// 	/* code */
	// 	cout<<"Yes!"<<endl;
	// }
	int len=s.length();
	string temp;
	for (int i = 0; i < len; ++i)
	{
		temp="";
		for (int j = 0; j < len; ++j)
		{	
		
			temp=temp+s[(i+j)%len];

		}
		// cout<<temp<<endl;
		if (temp==s1)
		{
			
			cout<<"yes!";
			return 0;
		}
	}
	cout<<"NO!";
	return 0;
}
