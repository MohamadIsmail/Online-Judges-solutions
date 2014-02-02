#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z,s;
	cin>>n;
	for(int k=1; k<=n; k++)
	{
		cin >>x>>y>>z>>s;
		if((x==y)&&(z==s)&&(x==z))
			cout<<"square"<<endl;
		else
		{
			if(((x==z)&&(y==s))||((x==y)&&(z==s))||((x==s)&&(y==z)))
				cout<<"rectangle"<<endl;
		    else
			{
				if((x<(y+z+s))&&(y<(x+z+s))&&(z<(s+x+y))&&(s<(x+y+z)))
					cout<<"quadrangle"<<endl;
				else
					cout<<"banana"<<endl;
			}
		}
	}
	return 0;
}