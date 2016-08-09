#include<stdio.h>
char s[10];
int top=-1;
void push(char x) {
    s[++top]=x;
}
void pop() {
  if(top!=-1){
  //  printf("Stack is empty\n");
  char a;
  a=s[top--];
  }
}
void print(/* arguments */) {
  int i=0;
  while (s[i]!='\0') {
    /* code */
    printf("%c\n",s[i] );
    i++;
  }
}
int main(int argc, char const *argv[]) {
  char a[10];
  int i;
  scanf("%s\n",a);
  for (i = 0; ; i++) {
    /* code */
  }
  push('a');
  push('b');
  pop();
  printf("%s",s);
  return 0;
}
