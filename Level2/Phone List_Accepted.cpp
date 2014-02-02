//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//bool equal (string arr,string str)
//{
//	if(str.size()<arr.size())
//		return false;
//	for(int i=0; i<arr.length(); i++)
//	{
//		if(arr[i]!=str[i])return false;
//	}
//	return true;
//}
//
//int main ()
//{
//	int n,m;
//	string s[10000];
//	cin>>n;
//	bool flag;
//	while(n--)
//	{
//		cin>>m;
//		flag=true;
//		for(int j=0; j<m; j++)
//			cin>>s[j];
//		sort(s,s+m);
//		for(int j=0; j<m-1; j++)
//		{
//			if(equal(s[j],s[j+1]))
//			{
//				flag=false;
//				break;
//			}
//		}
//		if (flag)
//			cout<<"YES\n";
//		else
//			cout<<"NO\n";
//
//	}
//	return 0;
//}