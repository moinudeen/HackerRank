#include "bits/stdc++.h"
using namespace std;

int minkey(int n, bool visited[],int key[]){

  int v=-1,min=9999;
  for(int i=1;i<=n;i++){
    if(key[i]<=min && visited[i]==false){
      min=key[i];
      v=i;
      //break;
    }
  }
  return v;
}
int main(){
  int t,x,y,n,m,w,v,r,s;

  //cin>>t;
  //while(t--){
    cin>>n>>m;
    vector< vector<int> > a ( n+1, std::vector<int> (n+1,-1) );
    
    for(int i=1;i<=m;i++){
      cin>>x>>y>>r;
      if(a[x][y]==-1){
        a[x][y]=r;
        a[y][x]=r;
      }else if(a[x][y]>r && a[y][x]>r){
          a[x][y]=r;
          a[y][x]=r;
        }

   }
    bool visited[n+1];
    int key[n+1];
    int pred[n+1];
    for (int i = 1; i <= n; i++) {
      /* code */
      visited[i]=false;
      key[i]=9999;
      pred[i]=-1;
      a[i][i]=-1;
    }
    cin>>s;
    key[s]=0;
    long int ans=0;
    int u=0;
    while((u = minkey(n,visited,key))!=-1){

      //if(u!=-1)
      for(int v=1;v<=n;v++){
        if(a[u][v]!=-1 && visited[v]==false)
        if(key[v]>=a[u][v]){
          key[v]=a[u][v];
          //ans+=key[v];
          pred[v]=u;
        }
      }
      visited[u]=true;
    }
    for(int i=1;i<=n;i++){
      if(pred[i]!=-1)
        ans+=a[i][pred[i]];
    }
    cout<<ans<<endl;
//  }
}
