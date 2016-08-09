#include <iostream>
using namespace std;
class seat{
public:
  char type;
  string id;
  string row_id;
  bool isBooked;
};
class row{
public:
  seat seats[4];
  string id;
};
class aircraft{
public:
  row rows[10];
  int no_of_rows;
  aircraft(int total){
    no_of_rows=total/4;
    row rows[no_of_rows];
    char row_id='A';
    for (int i = 1; i <= no_of_rows; i++) {
      /* code */
        string temp_id="";
        temp_id=row_id+i+'0';
      for (int j = 1; j <= 4; j++) {
        /* code */
        if(j==1 || j==4)
          rows[i].seats[j].type='W';
        else if( j==2 || j==3)
          rows[i].seats[j].type='A';
        rows[i].seats[j].id=temp_id;
        rows[i].seats[j].row_id=row_id;
        rows[i].seats[j].isBooked=false;
      }
      row_id++;
    }
  }
  void booknow(int total,int window, int aisle, int nearby) {
    /* code */
    int no_of_rows=total/4;

  }
  void display(){
    for (int i = 1; i <= no_of_rows; i++) {
      /* code */
      for (int j = 1; j <= 4; j++) {
        /* code */
        cout<<rows[i].seats[j].isBooked<<"\t ";
      }
      cout<<endl;
    }
  }
};
int main(int argc, char const *argv[]) {

  int total,n,ai,w;
  cin>>total;
  cin>>w>>ai>>n;
  aircraft a(40);
  a.booknow(total,n,ai,w);
  a.display();

  return 0;
}
