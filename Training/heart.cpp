#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  for (int i = 1; i <= n ; i++) {
    /* code */
    for(int j=1;j<=abs(n-i);j++)
      cout<<" ";
    for(int j=1;j<= 2*(n-abs(n-i))-1;j++){
      //printf("*");
      cout<<"*";
    }
    for(int j=1;j<=2*abs(n-i);j++)
      cout<<" ";
    for(int j=1;j<= 2*(n-abs(n-i))-1;j++){
      //printf("*");
      cout<<"*";
    }

    cout<<endl;

  }
  for (int i = 1; i <2*n-1 ; i++) {
    /* code */
    for(int k=0;k<(i);k++)
      cout<<" ";
      for (int j = 1; j <2*(2*n-i)-1 ; j+=1) {
        /* code */
          std::cout << "*" ;
      }
      cout<<endl;
  }
  for (int i = 1; i < 2*n-1; i++) {
    /* code */cout<<" ";
  }
  cout<<"*";
  return 0;
}
