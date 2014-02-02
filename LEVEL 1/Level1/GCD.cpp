#include <iostream>
using namespace std;

int GCD(int a,int b)
{
	while(true)
	{
		a=a%b;
		if(a==0)
			return b;
		b=b%a;
		if(b==0)
			return a;
	}
}

int main()
{
	int N;
	for(int m=1 ;m<=100 ;m++ )
	{
		cin>>N;
		if(N==0)
			break;
	     int G=0;
        for(int i=1;i<N;i++)

          for(int j=i+1;j<=N;j++)
          {
              G+=GCD(i,j);
           }
		cout<<G<<endl;
	}
	return 0;
}
