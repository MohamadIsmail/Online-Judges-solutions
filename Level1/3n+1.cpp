#include <iostream>
using namespace std;

int main()
{
    long long i,j,maximum,s,a,d;
	while(cin >>i >>j)
	{
        a = 0,s=-1;
		if(i>j)
		{
			s=i,i=j,j=s;
		}
        for (int n=i; n<=j; n++)
        {
		   d=n;
           maximum=1;
           while(d!=1)
           {
              if(d%2==0)
              {
				 d = d/2;
                 maximum++;
              }
			  else
              {
                 d=(3*d)+1,maximum++;
              }
		   }
           if (a < maximum)
           a = maximum;         
	    }
	   if(s==j)
		   cout <<j <<" " <<i <<" " <<a <<endl;
	   else
		   cout <<i <<" " <<j <<" " <<a <<endl;
	}
	return 0;
}
