#include <iostream>
#include <stack>
#include <set>
#include <map>
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
};

int main(int argc, char const *argv[]) {
  char ch='a';
  string a,b;
  std::map < string, int > m;
  set <string> s;
  int id=1;
  while(ch!='*'){
    cin>>a>>b;
    if(s.find(a)==s.end())
    s.insert(a);
    if(s.find(b)==s.end())
    s.insert(b);

    // Graph a(nodes,edges);
    // a.display();
    cout<<"To exit Enter *";
    cin>>ch;
  }
  for(auto i: s){
    //cout<<i;
    m[i]=id++;
    cout<<i<<" ";
  }
  int size=s.size();
  //  for(auto i: m){
  //    cout<<i.second;
  // }
   cout<<size;
   return 0;
}
