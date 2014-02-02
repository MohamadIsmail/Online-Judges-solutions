#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	   for(int i=1;i<=t;i++)
	   {
            int counter=0;
             cin>>n;
	   for(int x=1;x<n;x++)
	    {
		for(int y=1;y<n;y++)
		{
			for(int z=1;z<n;z++)
			{
				 if((3*x)+y+z==n)
					counter++;
			}
		}
	   }
	    cout<<"case #"<<i<<": "<<counter<<endl;
	   }
	   return 0;
}