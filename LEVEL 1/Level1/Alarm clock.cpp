#include<iostream>
using namespace std;
int main()
{
	int hsleep,msleep,halarm,malarm,mx,hx;

	while(cin>>hsleep>>msleep>>halarm>>malarm)
	{
		if((hsleep==0)&&(msleep==0)&&(halarm==0)&&(malarm==0))
			break;
		msleep=(hsleep*60)+msleep;
		malarm=(halarm*60)+malarm;
		if(msleep>malarm)
		{
			msleep=(24*60)-msleep;
		    mx=msleep+malarm;
		}
		else
		{
			mx=malarm-msleep;
		}
		cout<<mx<<endl;
	}
	return 0;
}
