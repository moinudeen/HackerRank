#include<stdio.h>
int main(){
  char s[100];
  int temp;
  int i=0,l=0;
  int j=i+1;
  int len=0;
  scanf("%s",s);
  while(s[l]!='\0'){
    len++;
    l++;
  }
  for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
      if((int)s[j]<(int)s[i]){
          temp=s[i];
          s[i]=s[j];
          s[j]=temp;
      }
    }
  }
  printf("%s\n",s );
  return 0;
}
