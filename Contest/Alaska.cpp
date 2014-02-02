//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//int main()
//{
//	int arr[102],n,value,Case=0;
//	map <int, int> m;
//	while(cin>>n)
//	{
//		bool flag=true;
//		for(int i=0; i<n; i++)
//			cin>>arr[i];
//		for(int j=0; j<n-1; j++)
//		{
//			if(arr[j]<1 || arr[j]>=arr[j+1])
//			{
//				flag=false;
//				break;
//			}
//		}
//		if(!flag)
//		{cout<<"Case #"<<++Case<<": It is not a B2-Sequence.\n\n";continue;}
//		for(int i=0; i<n; i++)
//		{
//			for(int j=i; j<n; j++)
//			{
//				value=arr[i]+arr[j];
//				if ( m [value] == 1 ) {
//					flag = false;
//					i = j = n;
//				}
//				else
//					m [value] = 1;
//			}
//		}
//		if(!flag)
//			cout<<"Case #"<<++Case<<": It is not a B2-Sequence.\n\n";
//		else
//			cout<<"Case #"<<++Case<<": It is a B2-Sequence.\n\n";
//		m.clear();
//	}
//	return 0;
//}
