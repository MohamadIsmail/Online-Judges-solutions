//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//#include<climits>
//using namespace std;
//
//int Graph[103][103],E,V,vertix[103];
//
//void floyd()
//{
//	for (int k = 0; k < V; k++) 
//		for (int i = 0; i < V; i++)
//			for (int j = 0; j < V; j++)
//				if(Graph[i][k] + Graph[k][j] < Graph[i][j])
//					Graph[i][j] = Graph[i][k] + Graph[k][j];
//}
//int main()
//{	
//	int t;
//	scanf("%d",&t);
//	for (int Case = 1;  Case<= t; Case++)
//	{
//		scanf("%d %d",&V,&E);
//		for (int i = 0; i < V; i++)
//		{
//			for (int j = 0; j < V; j++)
//			{
//				Graph[i][j]= i == j ? 0 : 0x3f3f3f3f;
//			}
//		}
//		for (int i = 0; i < E; i++)
//		{
//			int x,y;
//			scanf("%d %d",&x, &y);
//			Graph[x][y] = Graph[y][x] = 1;
//		}
//		floyd();
//		int begin,end;
//		scanf("%d %d",&begin,&end);
//		int sum=0;
//		for (int i = 0; i < V; i++)
//		{
//			sum=max(sum,Graph[i][begin]+Graph[end][i]);
//		}
//		printf("Case %d: %d\n",Case,sum);
//	}
//	return 0;
//}