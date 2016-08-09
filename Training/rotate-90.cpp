#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int n=4;
  int x,y;
  for(int k=0;k<4;k++)
  for (x = 0; x < n/2; x++) {
    /* code */
    for (y=x; y< n-1-x;y++) {
      /* code */
      int temp=m[x][y];
      m[x][y]=m[y][n-1-x];
      m[y][n-1-x]=m[n-1-x][n-1-y];
      m[n-1-x][n-1-y]=m[n-1-y][x];
      m[n-1-y][x]=temp;
    }
  }
  for (int i = 0; i < n; i++) {
    /* code */
    for (int j=0;j<n;j++) {
      /* code */
      cout<<m[i][j]<< " ";
    }
    cout<<endl;
  }
  return 0;
}
