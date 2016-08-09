#include <iostream>
#include <stack>
using namespace std;
class Graph{
  public:
    int v,e;
    int adj_mat[10][10];
    bool visited[10];
    Graph(int n, int edge){
       adj_mat[n+1][n+1]={0};
       visited[n]={false};
       v=n;
       e=edge;
       int a,b;
       for (int i = 0; i < e; i++) {
         /* code */
         cin>>a>>b;
         adj_mat[a][b]=1;
         adj_mat[b][a]=1;
       }
    }
    void display(){
      for (int i = 1; i <=v ; i++) {
        /* code */
        for (int j = 0; j <=v ; j++) {
          /* code */
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
      }
    }
    void dfs(int start){
        stack <int> s;
        s.push(start);
        visited[start]=true;
        int j;
        while(!s.empty()){
          j = s.top();
          s.pop();
          cout<<j<<" ";
          for (int i =1; i <=v ; i++) {
            /* code */
            if(visited[i]==false && adj_mat[j][i]==1){
              s.push(i);
              visited[i]=true;
            }
          }
        }
    }
};

int main(int argc, char const *argv[]) {
  int nodes,edges;
  cin>>nodes>>edges;
  Graph a(nodes,edges);
  a.display();
  int start;
  cin>>start;
  a.dfs(start);
  return 0;
}
