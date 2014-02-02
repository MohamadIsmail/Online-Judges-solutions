//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	stack<char> my;
//	int n;
//	string str;
//	cin>>n;
//	cin.ignore();
//	for(int i=0; i<n; i++)
//	{
//		getline(cin,str);
//		if(str=="")
//		{
//			cout<<"Yes\n";
//			continue;
//		}
//		for(int i=0; i<str.size(); i++)
//		{
//			if(str[i]==')')
//			{
//				if( !my.empty() && my.top()=='(' )
//					my.pop();
//				else
//					my.push(str[i]);
//			}
//			else if(str[i]==']')
//			{
//				if( !my.empty() && my.top()=='[' )
//					my.pop();
//				else
//					my.push(str[i]);
//			}
//			else
//				my.push(str[i]);
//		}
//		if(!my.empty())
//			cout<<"No\n";
//		else
//			cout<<"Yes\n";	
//		while (!my.empty())
//			my.pop();
//	}
//	return 0;
//}