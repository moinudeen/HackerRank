#include <iostream>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,e,a[10][10]={0},visited[10]={0};
  cin>>n>>e;
  for (int i = 0; i < e; i++){
    /* code */
    int x,y;
    cin>>x>>y;
    a[x][y]=1;
  }
  int src,des;
  cin>>src>>des;
  int ans=0;
  //queue<int> q;
  //q.push(src);
  //visted[src]=1;
  //int ans=0,limit=0;
  //for (int i = 1; i <= n; i++) {
    /* code */
      for (int j = 1; j <= n; j++) {
        /* code */
          if(a[src][j]==1){
            if (a[j][des]==1) {
              /* code */
                ans++;
            }
          }
      }
  //}
  // while(!q.empty()){
  //   int x;
  //   x=q.front();
  //   q.pop();
  //   for (int i = 1; i <= n; i++) {
  //     if(a[x][i]==1 && visited[i]==0){
  //
  //     }
  //   }
  //
  // }
  cout<<ans<<endl;
  return 0;
}
