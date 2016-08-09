#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    int rem=0,alpha[26]={0};
    for(int i=0;i<s.length();i++){
        alpha[s[i]-'a']++;
    }
    int k,max=0;
    for (int i=0;i<26; i++) {
      /* code */
      if(max<alpha[i])
        max=alpha[i];
    }
    //cout<<alpha[0];
    for ( k=0;k<26; k++) {
      if(alpha[k]==max || alpha[k]==0){
        continue;
      }else{
        break;
      }
    }
      if(k==26){
        cout<<"YES";
        return 0;
      }

    for(int i=1;i<26;i++){
        //if(alpha[i]!=0)
            if(alpha[i]!=alpha[i-1] && alpha[i]!=0)
                rem+=abs(alpha[i]-alpha[i-1]);
      //cout<<alpha[i]<<" ";
    }
    //cout<<rem;
    if(rem<=1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
