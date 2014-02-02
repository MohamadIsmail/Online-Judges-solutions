#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define floatingpoint setprecision(3)<<fixed

int main()
{
	float u,v,a,t,s;
	int x,i=1;

	while(cin >>x && x!=0)
	{
		switch(x)
		{
		case(1):
			{
				cin >>u >>v >>t;
				double a = (v-u)/t;
				double s = 0.5*(u+v)*t;
				cout <<"Case " <<i <<": "<< floatingpoint<<s <<" " <<floatingpoint<<a <<endl;
				i++;
				a=0,s=0;
				break;
			}
			case(2):
			{
				cin >>u >>v >>a;
				double t = (v-u)/a;
				double s = 0.5*(u+v)*t;
				cout <<"Case " <<i <<": " <<floatingpoint <<s <<" " <<floatingpoint <<t <<endl;
				i++;
				t=0,s=0;
				break;
			}
			case(3):
			{
				cin >>u >>a >>s;
				double v = pow(double (u*u + 2*a*s), 0.5);
				double t = (v-u)/a;
				cout <<"Case " <<i <<": " <<floatingpoint <<v <<" " <<floatingpoint <<t <<endl;
				i++;
				v=0, t=0;
				break;
			}
			case(4):
			{
				cin >>v >>a >>s;
				double u = pow(double (v*v - 2*a*s), 0.5);
				double t = (v-u)/a;
				cout <<"Case " <<i <<": " <<floatingpoint <<u <<" " <<floatingpoint <<t <<endl;
				i++;
				u=0, t=0;
				break;
			}
		}
	}
return 0;
}
