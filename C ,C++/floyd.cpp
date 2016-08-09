#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,query,x,y,z;
    cin>>n>>m;
    vector< vector<int> > a(n,vector <int> (n,99999));
   // vector< vector<int> > q (n,vector<int> (n,0) );
    //vector< vector<int> > sol (n,vector<int> (n,0));
    //cin>>n>>m;
    int q[n][n]={0},sol[n][n]={0};
    for(int i=0;i<m;i++){
        cin>>x>>y>>z;
       // if(a[x][y]==-1){
            a[x][y]=z;
            sol[x][y]=z;

       // }else if(a[x][y])
    }
    cin>>query;
    for(int i=0;i<query;i++){
        cin>>x>>y;
        q[x][y]=1;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][k]+a[k][j]< a[i][j]){
                    sol[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(sol[i][j]!=0){
                    cout<<sol[i][j]<<endl;
                }else{
                    cout<<-1;
                }
            }
    }
    return 0;
}
