#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,w,n,m,s,x,y;
  int a[1000][1000];
  bool visited[1000];
  int hop[1000],pred[1000];
  queue <int> q;
  cin>>t;
  while(t--){
    cin>>n>>m;
    for (int i = 1; i <= n; i++) {
      for(int j=1; j<=n; j++){
      a[i][j]=-1;
      }
    }
    for(int i =1;i<=n;i++){
      visited[i]=false;
      hop[i]=999;
      pred[i]=-1;
    }
    for(int i=1;i<=m;i++){
      cin>>x>>y;
      a[x][y]=6;
      a[y][x]=6;
    }
    cin>>s;
    q.push(s);
    //visited[s]=true;
    hop[s]=0;
    while(!q.empty()){
      w=q.front();
    //cout<<w;
      q.pop();
      for(int k=1;k<=n;k++){
        if(a[w][k]==6){
          if(visited[k]==false){
            q.push(k);
            visited[k]=true;
            if((hop[w]+6)<hop[k]){
              hop[k]=hop[w]+6;
              pred[k]=w;
            }
          }
        }
      }
    }
    for( int i=1; i<=n;i++){
      if(i!=s)
      if(hop[i]==999)
        cout<<-1<<" ";
      else
        cout<<hop[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
