//#include<iostream>
//#include<cmath>
//#include<string>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	//freopen("1.txt","rt",stdin);
//	long long kase=0,l,sum,test;
//	string str;
//	cin>>test;
//	while(test--)
//	{
//		cin>>str;
//		l=str.size()-1,sum=1;
//		for (long long i = 0; i < str.size(); i++)
//		{
//			if(str[i]=='P')
//				sum*=4/**(long long)pow(10.0,double(l-i))*/;
//			if(str[i]=='O' )
//				sum*=5/*(long long)pow(10.0,double(l-i))*/;
//			if (str[i]=='E')
//				sum*=4;
//			if(str[i]=='S')
//				sum*=3/*(long long)pow(10.0,double(l-i))*/;
//			if(str[i]=='N')
//				sum*=9;
//		}
//		cout<<"Case #"<<++kase<<": "<<sum<<endl;
//	}
//	return 0;
//}