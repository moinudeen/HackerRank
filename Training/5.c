#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,t,original,x,y=0,z,n;
  scanf("%d",&n);
  for( i=100;i<=n;i++){
    t=i;
    while (t>0){
        x=t%10;
        z=x*x*x;
        y=y+z;
        t=t/10;
    }
    if(y==i)
      printf("%d\n",i);
    y=0;
  }
  return 0;
}
