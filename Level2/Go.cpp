//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[100][100],n,m;
//	while(cin>>n>>m)
//	{
//		if((n==0)&&(m==0))break;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<m; j++)
//				cin>>arr[i][j];
//		}
//		cout<<"Original Matrix:"<<endl;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<m; j++)
//				cout<<arr[i][j]<<" ";
//			cout<<endl;
//		}
//		cout<<"\nTransposed Matrix:"<<endl;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<m; j++)
//				cout<<arr[j][i]<<" ";
//			cout<<endl;
//		}
//	}
//	return 0;
//}