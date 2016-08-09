#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int i,n,j,a[10];
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  for ( i= 0; i<n-1 ; i+=2) {
    for(j=i+2;j<n;j+=2){
      if(a[i]>a[j]){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
      }
      if(a[i+1]<a[j+1] && j+1<n){
        int temp=a[j+1];
        a[j+1]=a[i+1];
        a[i+1]=temp;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout<<a[i]<<" ";
  }
  return 0;
}
