//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<string>
//#include<cstdio>
//using namespace std;
//
////int num=1;
////string multiplication[102],mult;
////
////void multiply(int k)
////{
////	int cin=0,sum,i=0;
////	int len = mult.size();
////	while(i<len){
////		sum=cin+(mult[i] - '0') * k;
////		mult[i] = (sum % 10) + '0';
////		i++;
////		cin = sum/10;
////	}
////	while(cin>0){
////		mult[i++] = (cin%10) + '0';
////		cin/=10;
////	}
////	for(int j=0;j<i;j++)
////		multiplication[num][j]=mult[j];
////}
////
////void print(int n){
////	int i;
////	int len = multiplication[n].size();
////	for(i=len-1;i>=0;i--){
////		printf("%c",multiplication[n][i]);
////	}
////	printf("\n");
////}
//
//int main()
//{
//	//multiplication[0][0]='1';
//	//mult+='1';
//	//freopen("1.txt","rt",stdin);
//	/*for (int i = 1; i < 100; i++)
//	{
//		multiply(3);
//		num++;
//	}*/
//	int n,test,count=0;
//	cin>>test;
//	while(test--)
//	{
//		cin>>n;
//		cout<<"Case #"<<++count<<": "<<(n*(n+1)/2)*3<<endl;
//		//print(n);
//	}
//	return 0;
//}