//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string x;
//	int arr[100][100],n,m,i,j,count;
//	while(cin>>n>>m)
//	{
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<m; j++)
//				cin>>arr[i][j];
//		}
//		cin>>x;
//		i=0,j=0;
//		count=arr[i][j];
//		for(int l=0; l<x.size(); l++)
//		{
//			if(x[l]=='S')
//			{
//				i++;
//				count+=arr[i][j];
//			}
//			if(x[l]=='N')
//			{
//				i--;
//				count+=arr[i][j];
//			}
//			if(x[l]=='E')
//			{
//				j++;
//				count+=arr[i][j];
//			}
//			if(x[l]=='W')
//			{
//				j--;
//				count+=arr[i][j];
//			}
//		}
//		cout<<count<<endl;
//	}
//	return 0;
//}