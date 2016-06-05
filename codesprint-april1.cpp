#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d,count=0;
    cin>>n>>d;
    int a[n];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[k]-a[j]==d && a[j]-a[i]==d)
                        count++;

            }
        }
    }
    cout<<count;
    return 0;
}
