//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int n,m,sum,arr[10][10],count=1;
//	while((cin>>n)&&(n!=0))
//	{
//		if(n%2==0)
//			m=n/2;
//		else
//			m=n/2+1;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<n; j++)
//				cin>>arr[i][j];
//		}
//		cout<<"Case "<<count<<":";
//		for(int i=0; i<m; i++)
//		{
//			sum=arr[i][i];
//			for(int j=i+1; j<n-i; j++)
//				sum+=arr[i][j];
//			for(int j=i+1; j<n-i-1; j++)
//				sum+=arr[j][n-i-1];
//			for(int j=n-i-1; j>=i+1; j--)
//				sum+=arr[n-i-1][j];
//			for(int j=n-i-1; j>=i+1; j--)
//				sum+=arr[j][i];
//			cout<<" "<<sum;
//		}
//		cout<<endl;
//		count++;
//	}
//	return 0;
//}