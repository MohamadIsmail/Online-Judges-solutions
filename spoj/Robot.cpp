//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//
//	//freopen("1.txt","rt",stdin);
//	long long n,num=0,test;
//	string str;
//	cin>>test;
//	while(test--)
//	{
//		str="";
//		cin>>n;
//		cout<<"Case #"<<++num<<": ";
//		if(n==0)
//		{
//			cout<<"0000\n";continue;
//		}
//		while(n!=0)
//		{
//			str+=(char)(n%2+48);
//			n/=2;
//		}
//		while(str.size()%4 !=0 )
//		{
//			str+='0';
//		}
//		reverse(str.begin(),str.end());
//		for (int i = 4; i < str.size(); i+=4)
//			str.insert(i++,",");
//		cout<<str<<endl;
//	}
//	return 0;
//}