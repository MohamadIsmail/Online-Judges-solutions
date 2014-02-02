#include <iostream>
using namespace std;
int main()
{
	long long x,y,d;
	int i=0;
	while((cin>>x>>y)&&(x>0)&&(y>0))
	{
		i++;
		int n=1;
		d=x;
		while(d!=1)
		{
              if(d%2!=0)
			  {
			      d=(3*d)+1;
				   if(d>y)
				     break;
				   else
					   n++;
			  }
              else
			  {
			      d = d/2;
				  n++;
			  }
		}
		cout<<"Case "<<i<<": "<<"A = "<<x<<", limit = "<<y<<", number of terms = "<<n<<endl;
	}
	return 0;
}
