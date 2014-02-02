//#include<iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//#include<cstdlib>
//#include<climits>
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
//#define pi acos(-1.0)
//using namespace std;
//
//int V,E;
//
//int min(int a, int b){ 
//	return a < b ? a : b; 
//}
//
//void floyd(double arr[][210])
//{
//	for (int k = 0; k < V; k++) 
//		for (int i = 0; i < V; i++)
//			for (int j = 0; j < V; j++)
//				arr [i] [j] = min (arr [i] [j], max (arr [i] [k], arr [k] [j]));
//	
//}
//
//double distance(double x1,double y1,double x2 ,double y2)
//{
//	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
//}
//
//int main()
//{
//	//freopen("1.txt","rt",stdin);
//	int test=0;
//	double Nodes[210][2];
//	while (scanf("%d",&V) && V)
//	{
//		//string str;
//		//getline(cin,str);
//		double Graph[210][210];
//		E=0;
//		for (int i = 0; i < V; i++)
//		{
//			scanf("%lf %lf",&Nodes[i][0], &Nodes[i][1]);
//		}
//		for (int i = 0; i < V; i++)
//		{
//			for (int j = 0; j < V; j++)
//			{
//				Graph[i][j]=100000;
//			}
//			Graph[i][i]=0;
//		}
//		for (int i = 0; i < V; i++)
//		{
//			for (int j = i+1 ; j < V; j++)
//			{
//				Graph[i][j]=Graph[j][i]=distance(Nodes[i][0],Nodes[i][1],Nodes[j][0],Nodes[j][1]);
//			}
//		}
//		floyd(Graph);
//		printf("Scenario #%d\nFrog Distance = %.3lf\n\n",++test,Graph[0][1]);
//	}
//	return 0;
//}