//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//#define INF 1e9
//
//
//int arr[102][102],V,E;
//
//void Floyd()
//{
//	
//	for (int k = 1; k <= V; k++)
//		for (int i = 1; i <= V; i++) // relax all E edges V-1 times, overall O(VE)
//			for (int j = 1; j <= V; j++) {
//				if(arr[i][j]>arr[i][k]+arr[k][j])
//					arr[i][j] = arr[i][k]+arr[k][j];// relax
//			}
//}
//void initialize()
//{
//	for (int i = 1; i <= V; i++)
//	{
//		for (int j = 1; j <= V; j++)
//		{
//			arr[i][j]=INF;
//		}
//		arr[i][i]=0;
//	}
//}
//int main()
//{
//	while (cin>>V)
//	{
//		initialize();
//		for (int i = 1; i <= V; i++)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				char str[11];
//				cin>>str;
//				if(str[0]=='x')
//					continue;
//				else{
//					arr[i][j]=atoi(str);
//					arr[j][i]=atoi(str);
//				}
//			}
//		}
//		Floyd();
//		int MAX=0;
//		for (int i = 1; i <= V; i++)
//		{
//			MAX=max(MAX,arr[1][i]);
//		}	
//		printf("%d\n",MAX);
//	}
//	return 0;
//}