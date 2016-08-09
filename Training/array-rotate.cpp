#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,4,5};
  int count=sizeof(arr)/sizeof(int);
  int temp = arr[0];
  for (int i = 0; i < count-1; i++) {
    /* code */
      arr[i]=arr[i+1];
  }
  arr[count-1]=temp;
  for (int i = 0; i < count; i++) {
    /* code */
    cout<<arr[i];
  }
  return 0;
}
