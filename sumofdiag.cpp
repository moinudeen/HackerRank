#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d1=0,d2=0;
    int a[100][100];
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>a[i][j];   
        }
    }
    for(int i=0;i<n;i++){
            d1+=a[i][i];
            d2+=a[i][n-1-i];
    }
    n=abs(d1-d2);   
    cout<<n;
    return 0;
}
