#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	if (l1>l2)
	{
		string temp="";
		for (int i = 0; i < abs(l2-l1); ++i)
		{
			temp+='0';
		}
		temp+=s2;
		s2=temp;
		l2=s2.length();
	}
	string res="";
	int sum=0,carry=0;
	for (int i = l1-1; i >=0 ; --i)
	{
		int first=s1[i]-'0';
		int second=s2[i]-'0';	
		sum=(first^second^carry)+'0';
		res=(char)sum+res;
		carry=(first&second)|(first&carry)|(second&carry);
	}
	if (carry)
	{
		res='1'+res;
	}
	cout<<res<<endl;
	return 0;
}