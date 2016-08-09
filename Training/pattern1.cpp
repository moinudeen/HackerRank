#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,k=1;
  cin>>n;
  for (int i = 1; i <= 2*n-1 ; i++) {
    /* code */
    for(int j=1;j<=abs(n-i);j++)
      cout<<" ";
    for(int j=1;j<= 2*(n-abs(n-i))-1;j++){
      //printf("*");
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
