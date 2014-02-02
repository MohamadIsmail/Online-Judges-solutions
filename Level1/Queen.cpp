#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d,n;
	while(cin>>n)
	{
	   for(int i=1; i<=n; i++)
	   {
		   cin>>a>>b>>c>>d;
		    if(((a==b)&&(c==d))||((a==c)||(b==d))||(a+b==c+d)||((abs(a-b))==(abs(c-d))))
			    cout<<"Case "<<i<<": Yes!\n";
		    else
			    cout<<"Case "<<i<<": No!\n";
	   }
	}
	return 0;
}