#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int len= s.length();
    int row=floor(sqrt(len));
    int col=ceil(sqrt(len));
    char a[row][col]={'\0'};
    int index=0;
    if(row*col<len)
    row=col;
    for (int i = 0; i < col; i++) {
      /* code */
      for (int j = i; j < len; j+=col) {
        /* code */
                    cout<<s[j];
      }
      cout<<" ";
    }

    return 0;
}
