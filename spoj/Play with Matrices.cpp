//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	long long n,sum,arr[105][105],count=1,test,total,sum2,temp;
//	cin>>test;
//	while(test--)
//	{
//		cin>>n;
//		if(n%2==0)
//			temp=n/2;
//		else
//			temp=n/2 +1;
//
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<n; j++)
//				cin>>arr[i][j];
//		}
//		cout<<"Case #"<<count++<<": ";
//		total=0;
//		for(int i=0; i<temp; i++)
//		{
//			sum=arr[i][i],sum2=0;
//			for(int j=i+1; j<n-i; j++)
//				sum+=arr[i][j];
//			for(int j=i+1; j<n-i-1; j++)
//				sum+=arr[j][n-i-1];
//			for(int j=n-i-1; j>=i+1; j--)
//				sum+=arr[n-i-1][j];
//			for(int j=n-i-1; j>=i+1; j--)
//				sum+=arr[j][i];
//			for (int j = i; j < n-i; j++)
//			{
//				sum2+=arr[j][j];
//			}
//			if(sum2!=0)
//				total+=sum/sum2;
//
//		}
//		cout<<total<<endl;
//	}
//	return 0;
//}