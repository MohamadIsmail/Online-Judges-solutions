#include<iostream>
using namespace std;
int main()
{
	int t,n,h;
	cin>>t;
	   for(int i=1;i<=t;i++)
	   {
		   int high=0,low=0,d;
		   cin>>n;
		   cin>>d;
		   for(int j=1;j<n;j++)
		   {
			   cin>>h;
			   if(d<h)
				   high++;
			   else
			   {
				   if(d>h)
					   low++;
			   }
			   d=h;
		   }
		   cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
	   }	
	   return 0;
}