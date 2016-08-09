#include <iostream>
#include <cstdio>
using namespace std;
struct emp
{
	int id;
	string name;
	string des;
	bool indian;
	int expr;
	bool cab;
	float base_pay;
	bool ug,pg;


	void getdata(){
		cout<<"-- Employee id ---"<<endl; 
		cin>>id;
		cout<<"-- Name --"<<endl;
		cin>>name;
		cout<<"-- Designation --"<<endl;
		cout<<"-- Qualification --"<<endl<<"UG?"<<endl<<"PG?";
		cin>>ug>>pg;
		cout<<"-- Experience --"<<endl;
		cin>>expr;
		cout<<"-- Nationality --"<<endl<<"Indian(1) or Foreigner(0)"<<endl;
		int x;
		if (cin>>x && x==1)
		{
			
			indian = true;
		}
			}
	void printdata(){
		cout<<id<<"  "<<name<<" "<<endl<<des<<" ";
		if(indian==true)cout<<"Indian \n";else cout<<"Foreigner \n";
		cout<<expr<<" "<<endl;
	}

};
int main(int argc, char const *argv[])
{
	emp Emp;
	Emp.getdata();
	Emp.calculate();
	Emp.printdata();
	return 0;
}