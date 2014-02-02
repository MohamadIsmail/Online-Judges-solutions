//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <queue>
//#include <assert.h>
//#include <string.h>
//using namespace std;
//
//typedef vector<int> vi;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define LL long long 
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//
//struct edge
//{
//	int from,to;
//	double cost;
//};
//
//int getParent(int i,int *set)
//{
//	if(i==set[i])
//		return i;
//	else
//		return (set[i]=getParent(set[i],set));
//}
//
//int isUnion(int a,int b,int* set)
//{
//	return getParent(a,set)==getParent(b,set);
//}
//
//void makeUnion(int a,int b,int* set)
//{
//	set[getParent(a,set)] = getParent(b,set);
//}
//
//bool sorting(edge e1 , edge e2) 
//{
//	return e1.cost < e2.cost;
//}
//
//const int SIZE = 752;
//double distance(double x1,double y1,double x2 ,double y2)
//{
//	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
//}
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	double Nodes[752][2];
//	edge Edglist[400000];
//	int t,n,set[800],m;
//	scanf("%d",&t);
//	string str;
//	while (t--)
//	{
//		cin.ignore();
//		getline(cin,str);
//		scanf("%d",&n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%lf %lf",Nodes[i], Nodes[i]+1);
//		}
//		int counter=0,done=0;
//		
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
//		scanf("%d",&m);
//		for(int i=0;i<n;i++)set[i]=i;
//		for (int i = 0; i < m; i++)
//		{
//			int f,to;
//			scanf("%d %d",&f,&to);
//			f--,to--;
//			if(!isUnion(f,to,set))
//			{
//				makeUnion(f,to,set);
//				done++;
//			}
//		}
//		sort(Edglist, Edglist+counter,sorting);
//		if(done==n-1)
//			printf("No new highways need\n");
//		for (int i = 0; i <counter && done<n-1; i++)
//		{
//			if(!isUnion(Edglist[i].from,Edglist[i].to,set))
//			{
//				printf("%d %d\n",Edglist[i].from+1, Edglist[i].to+1);
//				makeUnion(Edglist[i].from,Edglist[i].to,set);
//				done++;
//			}
//		}
//		if(t)
//			printf("\n");
//	}
//	return 0;
//}