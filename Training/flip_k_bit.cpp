#include <iostream>
// #include
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned int n,k;
	cin>>n>>k;
	if(n & (1<<k)){
		n=n-pow(2,k);
		cout<<n;
	}
	else
		cout<<"no";
	return 0;
}