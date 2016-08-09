#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string one,two;
    int alphabet[26]={0},sum=0;
    cin>>one>>two;
    for(int i=0;i<one.length();i++)
      alphabet[one[i]-'a']++;
    for(int i=0;i<two.length();i++)
      alphabet[two[i]-'a']--;
    for(int i=0;i<26;i++){
      sum+=abs(alphabet[i]);
    }
    cout<<sum;
    return 0;
}
