#include <iostream>
#include<cstdlib>
using namespace std;
void addAfter(int *arr,int key,int value, int size){
    // int size=sizeof(arr)/sizeof(int);
    for (int i = 0; i <= size-1; i++) {
      /* code */
      if(arr[i]==key){
        i++;
        int temp=arr[i];
        arr[i]=value;
        size++;
        for (int j = i+1; j < size; j++) {
          /* code */
          //int temp1=arr[j+1];
          int temp1=arr[j];
          arr[j]=temp;
          temp=temp1;

        }
      }
    }
    for (int i = 0; i < size; i++) {
      /* code */
      cout<<arr[i];
    }
}
int main(int argc, char const *argv[]) {
  int arr[] = {1,2,3,1,2,3};
  int count=sizeof(arr)/sizeof(int);
  addAfter(arr,2,5,count);


  return 0;
}
