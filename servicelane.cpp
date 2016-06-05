#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,t,w[100000];
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    while(t--){
        int i,j,min;
        cin>>i>>j;
        min=w[i];
        for(int k=i;k<=j;k++){
            if(w[k]<min)
                min=w[k];
        }
        cout<<min<<endl;
    }
    return 0;
}
