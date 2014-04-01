#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
	int n;
	string str;
	while(cin>>n && n!=0)
	{
		bool ishere=false,ishere2=false;
		int dist=0,mini=10000000;
		cin>>str;
		for(int i=0; i<n; i++)
		{
			if(str[i]=='Z')
				mini=0;
			if(str[i]=='R')
			{
				if(ishere2==true)
				{
					dist=1;
					continue;
				}
				if( dist<mini && ishere==true )mini=dist;
				dist=1;
				ishere2=true;
				ishere=false;
			}
			if(str[i]=='D')
			{
				if(ishere==true)
				{
					dist=1;
					continue;
				}
				if( dist<mini && ishere2==true)mini=dist;
				dist=1;
				ishere=true;
				ishere2=false;
			}
			if(str[i]=='.' && (ishere==true || ishere2==true))
				dist++;
		}
		cout<<mini<<endl;
	}
	return 0;
}
