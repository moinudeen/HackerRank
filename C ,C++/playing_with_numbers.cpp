#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define gc getchar_unlocked
using namespace std;
inline void fastread(int &x){
    register int c = gc();
    int neg=0;
    for(;((c<48 || c>57) && c!='-'); c=gc());
    if(c=='-'){
        neg=1;
        c=gc();
    }
    for(;(c>47 && c<58);c=gc()){
        x= (x<<1) +(x<<3)+ c-48;
    }
    if(neg)
        x=-x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,n,q,x=0,query[500000];
    vector <int> v;
    long int sum=0,neg_sum=0,pos_sum=0,count_neg,count_pos;
    cin>>n;
    for(int i=0;i<n;i++){
        fastread(x);
        v.push_back(x);
        if(x<0){
          neg_sum+=x;
          ++count_neg;
          }
        else{
          pos_sum+=x;
          ++count_pos;
        }
        x=0;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        fastread(query[i]);
    }
    sort(v.begin(),v.end());
    for(int k=0; k<q;k++){
        //sum=0;
        a=neg_sum+(count_neg*query[k]);
        b=pos_sum+(count_pos*query[k]);
        sum = (-a)+b;
        pos_sum=b;
        neg_sum=a;

        printf("%li\n",sum);
    }
    //for( int i =0;i <v.size();i++){
      //printf("%d ", v[i]);
    //}
  //  cout<<neg_sum<<" "<<pos_sum<<" "<<count_pos;
    return 0;
}
