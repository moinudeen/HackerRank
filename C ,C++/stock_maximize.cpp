#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    cin>>t;
    while(t--){
      cin>>n;
      vector <int> price(n);
      //  int x;
      for(int i=0;i<n;i++){
        cin>>price[i];
        //price.push_back(x);
      }
      int current_max=0;
      long int profit =0;
      for(int i=n-1;i>=0;i--){
        current_max=max(current_max,price[i]);
        profit+=current_max-price[i];
      }
      cout<<profit<<endl;
    }
    return 0;
}
