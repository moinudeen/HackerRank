#include<stdio.h>
int main(){
  char s[100];
  cin>>s;
  int temp;
  int i=0;
  int j=i+1;
  int
  for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
      if((int)s[j]>(int)s[i]){
          temp=s[i];
          s[i]=(int)s[j];
          s[j]=temp;

      }
      j++;
    }
    i++;
  }
  cout<<s;
  return 0;
}
