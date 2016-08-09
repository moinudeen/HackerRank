#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[]) {
  int n,k;
  //std::vector<int> slime,res;
  cin>>n;
  vector <int> slime,res;
  for (int i = 0; i < n; i++) {
    slime.push_back(1);
  }
  res.push_back(slime[0]);
  for(int i=1; i<n; i++){
    res.push_back(slime[i]);
    int j = res.size()-2;
    while(res.back() == res[j]){
      res[j]=res.back()+1;
      res.pop_back();
      j = res.size()-2;
    }
  }
 k = res.size();
  for (int i = 0; i <= k-1 ; i++) {

    cout<<res.at(i)<<" ";
  }
//  cout<<res.back();

  return 0;
}
