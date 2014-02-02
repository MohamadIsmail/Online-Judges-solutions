//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//
//#define max(a,b) (a>b)?a:b
//
//int GCD(int a ,int b)
//{
//	if(b==0)return a;
//
//	else return GCD(b,a%b);
//}
//
//int lcm(int a, int b)
//{
//  return (a*b)/gcd(a,b);
//}
//
//int main()
//{
//	int T,n,num,counter;
//	char str[205];
//	int arr[100];
//	cin>>T;
//	cin.ignore();
//	while(T--)
//	{
//		gets(str);
//		n=strlen(str),num=0,counter=0;
//		for(int i=0; i<n; i++)
//		{
//			if(str[i]!=' ')
//			{	
//				num*=10;
//				num+=str[i]-'0';
//			}
//			else
//			{
//				arr[counter++]=num;
//				num=0;
//			}
//		}
//		if(num)
//			arr[counter++]=num;
//		int Max=1;
//		for(int i=0; i<counter; i++)
//		{
//			for(int j=i+1; j<counter; j++)
//			{
//				Max=max(Max,GCD(arr[i],arr[j]));
//			}
//		}
//		cout<<Max<<endl;
//	}
//	return 0;
//}