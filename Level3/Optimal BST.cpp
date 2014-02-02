//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int Cost[11][101], DP[11][101];
//
//int min(int a, int b,int c)
//{
//	if(a<b)
//		if(a<c)
//			return a;
//		else
//			return c;
//	else
//		if(b<c)
//			return b;
//		else
//			return c;
//}
//int func(int i ,int j)
//{
//	DP[i][j]=min(Cost[i-1][j-1],Cost[i][j-1],Cost[i+1][j-1])+Cost[i][j];
//}
//int main()
//{
//	int row ,col ;
//	while(cin>>row>>col)
//	{
//		memset(DP,-1, sizeof(DP));
//		for(int i=0; i<row; i++)
//		{
//			for(int j=0; j<col; j++)
//				cin>>Cost[i][j];
//		}
//		cout<<func(0,0)<<endl;
//	}
//	return 0;
//}