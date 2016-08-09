#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  if(n==1)
  cout<<"1"<<endl;
  if(n>=2)
  cout<<"1"<<endl<<"11"<<endl;
  string s="11";
  for (int i = 3; i <=n; i++) {
    /* code */
    s+='$';
    string temp="";
    int count=1,len=s.length();
    for(int j=1;j<len;j++) {
      /* code */
      if (s[j]!=s[j-1]) {
        temp+=count+'0';
        //s="";
       temp+=s[j-1];
       //s=temp;
       count=1;
     }else{
       count++;
     }
      //out<<s;
      //j++;
    }
    //cout<<temp<<endl;
    s=temp;
    cout<<s<<endl;

  }
  return 0;
}
