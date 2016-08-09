#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,i,j,k,m,a[10][10]={0},x,y;
  scanf("%d %d",&n,&m);
  for (i = 1; i <=m ; i++) {
    /* code */
    scanf("%d %d",&x,&y);
    a[x][y]=-1;
    // a[y][x]=-1;
  }
  for ( i = 1; i <= 8; i++) {
    for ( j = 1; j <= 8; j++) {
      /* code */
        if(a[i][j]==-1){
          for ( k = 1; k <=8 ; k++) {
            //if(a[i][k]!=-1)
              a[i][k]=1;
              a[k][j]=1;
          }
        }
    }
  }
  k=0;
  for ( i = 1; i <= 8; i++) {
    /* code */
    for (j = 0; j <= 8; j++) {
      /* code */
        if(a[i][j]==1)
          k++;
    }

  }
  printf("%d %d\n", k, 64-k );
  return 0;
}
