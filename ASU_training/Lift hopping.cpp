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
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define INF 1e9
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//int m, n,k;
//
//struct elev
//{
//	int time;
//	bool valid[101];
//}elevators [5];
//
//struct Floor{
//	int cost, index,elev;
//	Floor(){}
//	Floor (int i, int j ,int k)
//	{
//		cost=i,index=j,elev=k;
//	}
//	bool operator < (const Floor& A)const
//	{
//		return A.cost < cost;
//	}
//};
//
//int dist [6][101];
//int dijkstra()
//{
//	priority_queue<Floor>pq;
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 101; j++)
//		{
//			dist[i][j]=INF_MAX;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		dist[i][0]=0;
//	}
//	Floor f;
//	f.index=0,f.cost=0;
//	for (int i = 0; i < n; i++)
//	{
//		if(elevators[i].valid[0]){
//			f.elev=i;pq.push(f);
//		}
//	}
//	while (!pq.empty())
//	{
//		f=pq.top();
//		pq.pop();
//		if(f.cost > dist[f.elev][f.index])continue;
//		for (int i = 0; i < 100; i++)
//		{
//			int cur=f.cost +elevators[f.elev].time *abs(f.index -i);
//			if(elevators[f.elev].valid[i] && dist[f.elev][i] > cur){
//				dist[f.elev][i]=cur;
//				pq.push(Floor(cur,i,f.elev));
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if(elevators[i].valid[f.index]){
//				if(dist[i][f.index] > f.cost +60)
//				{
//					dist[i][f.index]=f.cost+60;
//					pq.push(Floor(f.cost+60,f.index,i));
//				}
//			}
//		}
//	}
//	int Min=INF_MAX;
//	for (int i = 0; i < 6; i++)
//	{
//		Min=min(Min,dist[i][k]);
//	}
//
//	return Min;
//}
//int main()
//{	
//	//Read();
//	while (cin >> n >> k)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			mem(elevators[i].valid,false);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d",&elevators[i].time);
//		}
//		cin.ignore();
//		for (int i = 0; i < n; i++)
//		{
//			string line ;
//			getline (cin,line);
//			istringstream iss(line); 
//			int j;	
//			while (iss >> j)
//			{
//				elevators[i].valid[j]=true;
//			}
//		}
//		int val=dijkstra();
//		if(val==INF_MAX)
//			puts("IMPOSSIBLE");
//		else
//			printf("%d\n",val);
//	}
//	return 0;
//}
