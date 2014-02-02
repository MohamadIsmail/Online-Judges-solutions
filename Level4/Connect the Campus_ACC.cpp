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
//struct edge
//{
//	int from,to;
//	double cost;
//};
//
//int getParent(int i,int *set)
//{
//    if(i==set[i])
//        return i;
//    else
//        return (set[i]=getParent(set[i],set));
//}
//
//int isUnion(int a,int b,int* set)
//{
//    return getParent(a,set)==getParent(b,set);
//}
//
//void makeUnion(int a,int b,int* set)
//{
//    set[getParent(a,set)] = getParent(b,set);
//}
//
//bool sorting(edge e1 , edge e2) 
//{
//	return e1.cost < e2.cost;
//}
//
//double distance(int  x1,int y1,int x2 ,int y2)
//{
//	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
//}
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	int Nodes[755][2];
//	double res;
//	edge Edglist[300000];
//	int t,n,set[755];
//	while (scanf("%d",&n) ==1 )
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d %d",Nodes[i], Nodes[i]+1);
//		}
//		int counter=0,done=0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = i+1; j < n; j++)
//			{
//				Edglist[counter].from=i;
//				Edglist[counter].to=j;
//				Edglist[counter].cost=distance(Nodes[i][0],Nodes[i][1],Nodes[j][0],Nodes[j][1]);
//				counter++;
//			}
//		}
//		int edges,from,to;
//		scanf("%d", &edges);
//		for (int i = 0; i < edges; i++)
//		{
//			scanf("%d %d",&from,&to);
//			from-=1,to-=1;
//			for (int j = 0; j < counter; j++)
//			{
//				if( ( Edglist[j].from==from && Edglist[j].to==to )|| ( Edglist[j].from==to && Edglist[j].to==from ) ){
//					Edglist[j].cost = 0 ;
//					break;
//				}
//			}
//		}
//		sort(Edglist, Edglist+counter,sorting);
//		res=0;
//		for(int i=0;i<n;i++)set[i]=i;
//		for (int i = 0; i <counter && done<n-1; i++)
//		{
//			if(!isUnion(Edglist[i].from,Edglist[i].to,set))
//			{
//				res+=Edglist[i].cost;
//				makeUnion(Edglist[i].from,Edglist[i].to,set);
//				done++;
//			}
//		}
//		printf("%.2lf\n",res);
//	}
//	return 0;
//}