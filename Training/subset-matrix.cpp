#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int i,j,ms;
  int as,top=0,flag=0;
  cin>>ms;
  int m[ms][ms];
  for (int i = 0; i < ms; ++i)
  {
  	for (int j = 0; j < ms; ++j)
  	{
  		/* code */
  		cin>>m[i][j];
  	}
  }  
  cin>>as;
  int s[as][as];
  for (int i = 0; i < as; ++i)
  {
  	for (int j = 0; j < as; ++j)
  	{
  		/* code */
  		cin>>s[i][j];
  	}
  }  

  // int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
  // int s[2][2]={{2,3},{4,6}};
 
  for ( i = 0; i <= ms-as; ++i)
  {
  	for ( j = 0; j <= ms-as; ++j)
  	{
  		flag=1;
  		for (int a = 0; a<as; ++a)
  		{
  			for (int b = 0; b<as; ++b)
  			{
  				if (m[i+a][j+b]!=s[a][b])
  				{
  					flag=0;
  					int x=m[i+a][j+b];
  					int y=s[a][b];
  					break;
  				}
  			}
  		}
  		if (flag==1)
  		{
  			/* code */
  			 cout<<"match found at "<<i+1<<" "<<j+1;
  			break;
  		}
  	}
  	if (flag==1)
  	{
  		/* code */
  		// cout<<"match found at "<<i+1<<" "<<j+1;
  		break;
  	}

  }
  if (flag==0)
  {
 	cout<<"Not found!"; 	
   }

  return 0;
}
