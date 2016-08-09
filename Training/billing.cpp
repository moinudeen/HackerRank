#include <iostream>
using namespace std;
class item{
  string name;
  int id;
  float price;
}
void readItem(item i[],int n) {
  /* code */
  for (int j = 0;j < n;j++) {
    cout<<"\n  Name of Item-"<<j<<": ";
    cin>>i[j].name;
  }
}
int main(int argc, char const *argv[]) {
  cout<<"\n------------------------------------------------------------------------------------";
  cout<<"\n-------------------------------Happy Store!-----------------------------------------";
  cout<<"\n------------------------------------------------------------------------------------";
  cout<<"\n\n  Enter the number of items: ";
  int n;
  cin>>n;
  item i[n];
  readItem(i,n);
  return 0;
}
