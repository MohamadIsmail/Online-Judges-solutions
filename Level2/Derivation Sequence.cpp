//#include<iostream>
//using namespace std;
//
//int m,arr[20],n;
//
//void dev(int x,int i,int j)
//{
//	if(j==n)
//		return;
//	if(i==x)
//		return dev(x-1,0,++j);
//	else
//	{
//		arr[i]=arr[i+1]-arr[i];
//		dev(x,++i,j);
//	}
//}
//
//int main()
//{ 
//	while(cin>>m>>n)
//	{
//		for(int i=0; i<m; i++)
//			cin>>arr[i];
//		dev(m-1,0,0);
//		for(int i=0; i<m-n; i++)
//			cout<<arr[i]<<" ";
//		cout<<endl;
//	}
//	return 0;
//}