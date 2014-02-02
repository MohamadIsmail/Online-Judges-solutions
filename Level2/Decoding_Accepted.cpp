//#include<iostream>
//#include<cmath>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string arr;
//	int T,x=0,y;
//	char ch;
//	cin>>T;
//	cin.ignore();
//	for(int i=1; i<=T; i++)
//	{
//		getline(cin,arr);
//		cout<<"Case "<<i<<": ";
//		for(int j=0; j<arr.size(); j++)
//		{
//			y=(int)arr[j];
//			if((y>=48)&&(y<=57))
//			{
//				x*=10;
//				x+=y-48;
//			}
//			if(((y>=65)&&(y<=90))||(j==arr.size()-1))
//			{
//				for(int m=0; m<x; m++)
//					cout<<ch;
//				ch=arr[j];
//				x=0;
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}