#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set <char> s;
    int i=0,size;
    char str[1000];
    size=sizeof(str);
    cin.getline(str,size);
    char str1[]="abcdefghijklmnopqrstuvwxyz";
    int j=0;
    while (str1[j]) {
      s.insert(str1[j]);
      j++;
    }

    while(str[i]){
      if(str[i]>=65 && str[i]<90)
        str[i]=(int)str[i]+32;
      if(str[i]!=' '){
          s.erase(str[i]);
      }
      i++;
    }

    if(s.empty()){
        cout<<"pangram";
    }else{
        cout<<"not pangram";
    }
    return 0;
}
