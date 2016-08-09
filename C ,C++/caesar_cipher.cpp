#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <istream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    char a='a';
    char A= 'A';
    for(int i=0;i<n;i++){
        if((s[i]>=65 && s[i]<=90 )){
            s[i]=A+((s[i]-A)+k)%26;
        } else if ( s[i]>=97 && s[i]<=122){
            s[i]=a+((s[i]-a)+k)%26;
        }
        //cout<<s[i];
    }
    cout<<s;
    return 0;
}
