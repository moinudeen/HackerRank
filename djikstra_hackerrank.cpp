#include "bits/stdc++.h"
using namespace std;

int mindist(int n, bool visited[],int dist[]){

  int v=-1,min=9999;
  for(int i=1;i<=n;i++){
    if(dist[i]<min && visited[i]==false){
      min=dist[i];
      v=i;
      //break;
    }
  }
  return v;
}
int main(){
  int t,x,y,n,m,w,v,r,s;

  cin>>t;
  while(t--){
    cin>>n>>m;
    vector< vector<int> > a ( n+1, std::vector<int> (n+1,0) );

    for(int i=1;i<=m;i++){
      cin>>x>>y>>r;
      if(a[x][y]==0){
        a[x][y]=r;
        a[y][x]=r;
      }else if(a[x][y]>r && a[y][x]>r)
        {
          a[x][y]=r;
          a[y][x]=r;
        }

   }
    bool visited[n+1];
    int dist[n+1];
    for (int i = 1; i <= n; i++) {
      /* code */
      visited[i]=false;
      dist[i]=9999;
    }
    cin>>s;
    dist[s]=0;
    int u;
    while((u=mindist(n,visited,dist))!=-1){
        //int u =0;
        //u = mindist(n,visited,dist);
        //cout<<u<<" ";

        for(int v=1;v<=n;v++){
          if( visited[v]==false && a[u][v]!=0)
              if( dist[u]!=9999 &&dist[v]>a[u][v]+dist[u])
                  dist[v]=a[u][v]+dist[u];
        }
        visited[u]=true;
    }
    for(int i=1;i<=n;i++){
      if(i!=s){
        if(dist[i]==9999)
          cout<<-1<<" ";
        else
          cout<<dist[i]<<" ";
      }
    }
    //free(a);
    cout<<endl;
  }
  return 1;
}
