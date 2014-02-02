//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long long arr[100][100],T,n;
//	char x,y;
//	cin>>T;
//	for(int m=1; m<=T; m++)
//	{
//		bool symmetric=true;
//		cin>>x>>y;
//		cin>>n;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<n; j++)
//				cin>>arr[i][j];
//		}
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<n; j++)
//			{
//				if(arr[i][j]<0)
//				{
//					symmetric=false;
//					break;
//				}
//			}
//			if(symmetric==false)
//				break;
//		}
//		if(symmetric==false)
//		{
//			cout<<"Test #"<<m<<": Non-symmetric."<<endl;
//			continue;
//		}
//		if(n%2==1)
//		{
//			for(int i=0; i<=n/2; i++)
//			{
//				for(int j=0; j<n; j++)
//				{
//					if(arr[i][j]!=arr[n-1-i][n-1-j])
//					{
//						symmetric=false;
//						break;
//					}
//				}
//				if(symmetric==false)
//					break;
//			}
//		}
//		else
//		{
//			for(int i=0; i<n/2; i++)
//			{
//				for(int j=0; j<n; j++)
//				{
//					if(arr[i][j]!=arr[n-1-i][n-1-j])
//					{
//						symmetric=false;
//						break;
//					}
//				}
//				if(symmetric==false)
//					break;
//			}
//		}
//		if(symmetric==false)
//			cout<<"Test #"<<m<<": Non-symmetric."<<endl;
//		else
//			cout<<"Test #"<<m<<": Symmetric."<<endl;
//	}
//	return 0;
//}