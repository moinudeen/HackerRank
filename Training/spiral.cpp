#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,left,right,up,down;
  cin>>n;
  left=0;
  right=n-1;
  up=0;
  down=n-1;
  int a[n][n],count=1;
  while( (right-left>0) && (down-up>0) ){
      for (int i = left; i <= right ; i++) {
        a[left][i]=count;
        count++;
      }
      for (int i = up+1 ; i <= down ; i++) {
        a[i][down]=count;
        count++;
      }
      for (int i = right-1 ; i >= left; i--) {
        a[right][i]=count;
        count++;
      }
      for (int i = down-1; i > up ; i--) {
        a[i][up]=count;
        count++;
      }
      left++;
      up++;
      right--;
      down--;

  }
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        /* code */
        cout<<a[i][j]<<"  ";
      }
      cout<<endl;
  }
  return 0;
}
