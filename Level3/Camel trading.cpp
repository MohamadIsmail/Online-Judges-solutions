//#include<iostream>
//#include<cmath>
//#include<string>
//#include<cstring>
//#include<limits.h>
//using namespace std;
//
//
//int main()
//{
//	int test,arr[13],arr_1[12],size,size_2,number,length;
//	char arr_2[12];
//	cin>>test;
//	cin.ignore();
//	string str;
//	while(test--)
//	{
//		getline(cin,str);
//		number=0,size=0,length=0;
//		for(int i=0; i<str.size(); i++){
//			if(str[i]=='+' || str[i]=='*'){
//				arr[size++]=number;
//				arr_2[length++]=str[i];
//				number=0;
//			}
//			else
//			{
//				number*=10;
//				number+=(int)str[i]-48;
//			}
//		}
//		arr[size++]=number,size_2=0;
//		for(int i=0; i<size-1; i++)
//		{
//			if(arr_2[i]=='+')
//			{
//				arr_1[size_2++]=arr[i]+arr[i+1];
//			}
//			if(arr_2[i]=='*')
//			{
//				if( (i==size-2 || i==0) || (((i!=size-2 && i!=0) && arr_2[i+1]=='*' ) ))
//					arr_1[size_2++]=arr[i+1];
//			}
//		}
//		cout<<"The minimum cutting  "<<".\n";
//	}
//	return 0;
//}
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int *arr,t;
//	while(cin>>t)
//	{
//		arr=new int[t];
//		for(int i=0; i<t;  i++)
//			cin>>arr[i];
//		sort(arr,arr+t);
//		for(int i=0; i<t;  i++)
//			cout<<arr[i]<<endl;
//		delete [] arr;
//	}
//	return 0; 
//}
//#include<algorithm>
//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int arr[500003];
//bool prime[500003];
//void sieve()
//{
//	memset(prime,sizeof(prime),true);
//	prime[0]=prime[1]=false;
//	int N=(int)sqrt(double (500002));
//	for(int i=2; i<N; i++)
//	{
//		if(prime[i])
//		{
//			for(int j=i*i; j<500002; j+=i)
//				prime[j]=false;
//
//		}
//	}
//		memset(arr,sizeof(arr),1);
//		arr[0]=0;
//		for(int i=2; i<500002; i++)
//			if(!prime[i])
//			{
//				if(i%2==0)
//				{
//					for(int j=2; j<=i/2; j++)
//					{	if(i%j==0)arr[i]+=j;
//					}
//				}
//				else
//				{
//					for(int j=2; j<=i/3; j++)
//					{	if(i%j==0)arr[i]+=j;
//					}
//				}
//			}
//
//}
//int main()
//{
//	sieve();
//
//	int t,n;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		//cout<<arr[n]<<endl;
//	}
//	return 0; 
//}
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int arr[20001],diffs[20001],T,N,K;
//	cin>>T;
//	while(T--)
//	{
//		cin>>N>>K;
//		for(int i=0; i<N;  i++)
//			cin>>arr[i];
//		sort(arr,arr+N);
//		for(int i=0; i<N-1;  i++)
//			diffs[i]=arr[i+1]-arr[i];
//		sort(diffs,diffs+N-1);
//		cout<<diffs[K-2]<<endl;
//	}
//	return 0; 
//}