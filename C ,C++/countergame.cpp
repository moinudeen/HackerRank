#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long int powerlessthan2(unsigned long long int number){
    number |= number>>1;
    number |= number>>2;
    number |= number>>4;
    number |= number>>8;
    number |= number>>16;
    number |= number>>32;
    return (number>>1)+1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    unsigned long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        int i=0;
        while(n>1){
            if(!(n&(n-1))){
                n-=n/2;
            }else{
                unsigned long long int x = powerlessthan2(n);
                n-=x;
            }
            i+=1;
        }
       if(!(i&1))
           cout<<"Richard\n";
        else
            cout<<"Louise\n";
       n=0;
    }
    return 0;
}
