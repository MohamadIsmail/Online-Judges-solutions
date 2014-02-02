//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,m,i=0;
//	while((cin>>n>>m)&&(n!=0)&&(m!=0)) 
//	{
//		int arr[10000],b[10000],j,l,s;
//		bool x = false;
//		for(j=0; j<n; j++)
//		{
//			cin>>arr[j];
//		}
//		for(l=0; l<m; l++)
//		{
//			cin>>b[l];
//		}
//		for(j=0; j<n-1; j++)
//		{
//			for(l=j+1; l<n; l++)
//			{
//				if(arr[j]>arr[l])
//				{
//					s = arr[j];   
//					arr[j] = arr[l];
//					arr[l] = s;
//				}
//			}
//		}
//		i++;
//		cout<<"CASE# "<<i<<":\n";
//		for(j=0; j<m; j++)
//		{
//			for(l=0; l<n; l++)
//			{
//				if(b[j]==arr[l])
//				{
//					cout<<b[j]<<" found at "<<l+1<<endl;
//					break;
//				}
//				if(l==n-1)
//				{
//					cout<<b[j]<<" not found"<<endl;
//					break;
//				}
//			}
//		}
//	}
//}