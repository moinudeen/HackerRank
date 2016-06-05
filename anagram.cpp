#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int l,t,x;
    string s;
    cin>>t;
    int countt=0;
    int alphanum,alphabet[26];
    while(t--){
        //map <char,int> m,m1;
                cin>>s;
        l=s.length();
        if(l%2!=0){
            cout<<"-1"<<endl;
        }else{
          int countt=0;
           int mid=(l/2);
           for(int i = 0; i < 26;i++){
			          alphabet[i] = 0;
		        }
           for(int i=0;i<l;i++){
             alphanum = (int)s[i]-'a';
             if(i<mid){
               alphabet[alphanum]++;
             }else{
               alphabet[alphanum]=max(alphabet[alphanum]-1,0);
             }
           }
           for(int i=0;i<26;i++)
            countt+=abs(alphabet[i]);
          cout<<countt<<endl;
        }
    }
    return 0;
}
