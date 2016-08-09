#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
	list <int> l,m;
	int x,n;
	cin>>n;
	for (int i =1;i <=n;++i)
	{
		/* code */
		cin>>x;
		l.emplace_back(x);
	}
	// cout<<l.size();
	int n2;
	cin>>n2;
	for (int i = 0; i < n2; ++i)
	{
		/* code */
		int z;
		cin>>z;
		m.emplace_back(z);

	}
	if((n-n2)>0){
		for (int i = 0; i < (n-n2); ++i)
		{
			/* code */
			m.push_front(0);
		}
	}else{
		for (int i = 0; i < (n2-n); ++i)
		{
			/* code */
			l.push_front(0);
		}
	}
	//cout<<l.size()<<" "<<m.size();
	list<int> res;
	int sum=0,carry=0;
	list<int>::reverse_iterator it=l.rbegin(),it1=m.rbegin();
	for(auto x:l){
		//cout<<*it<<*it1;
		int d =((*it)+(*it1))%10;
		sum=carry+d;
		carry=((*it)+(*it1))/10;
		res.push_front(sum);
		it1++;	
		it++;
	}
	//cout<<res;
	for(auto a:res){
		cout<<a<<" ";
	}
	return 0;
}