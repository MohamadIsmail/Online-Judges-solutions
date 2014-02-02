////#include<iostream>
////#include<algorithm>
////#include <limits.h>
////#include<utility>
////#include<string>
////#include<cmath>
////using namespace std;
////
////int main()
////{
////	int n,t,m;
////	cin>>t;
////	while(t--)
////	{
////		cin>>n;
////		int m=1;
////		for(int i=2; i<=n; i++)
////		{
////			m*=i;
////		}
////		cout<<m<<endl;
////	}
////	return 0;
////}
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//
//
//char f[10000];
//char factorial[1010][10000];
//void multiply(int k){
//	int cin,sum,i;
//	int len = strlen(f);
//	cin=0;
//	i=0;
//	while(i<len)
//	{
//		sum=cin+(f[i] - '0') * k;
//		f[i] = (sum % 10) + '0';
//		i++;
//		cin = sum/10;
//	}
//	while(cin>0)
//	{
//		f[i++] = (cin%10) + '0';
//		cin/=10;
//	}
//	f[i]='\0';
//	for(int j=0;j<i;j++)
//		factorial[k][j]=f[j];
//	factorial[k][i]='\0';
//}
//void fac(){
//	int k;
//	strcpy(f,"1");
//	for(k=2;k<=1000;k++)
//		multiply(k);
//}
//void print(int n)
//{
//	int i;
//	int len = strlen(factorial[n]);
//	//printf("%d!\n",n);
//	for(i=len-1;i>=0;i--)
//	{
//		printf("%c",factorial[n][i]);
//	}
//	printf("\n");
//}
//int main(){
//	int n,t;
//	factorial[0][0]='1';
//	factorial[1][0]='1';
//	fac();
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		print(n);
//	}
//	return 0;
//}