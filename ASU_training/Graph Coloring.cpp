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
//#define N 1000000
//#define LL long long
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define Black 0
//#define White 1
//
//vector<vector<int> > graph;
//int n,m,t, color[102],Max;
//vector<bool> colored;
//vector<int> answer;
//
//void DFS(int u)
//{
//	if(u==n )
//	{
//		int black=0,white=0;
//		for (int i = 0; i < n; i++)
//		{
//			if(color[i]==Black)
//				black++;
//			else
//				white++;
//		}
//		if(black >Max)
//		{
//			Max=black;
//			answer.clear();
//			for (int i = 0; i < n; i++)
//			{
//				if(color[i]==Black)
//					answer.push_back(i);
//			}
//		}
//		return;
//	}
//	bool can=true;
//	for (int i = 0; i < graph[u].size(); i++)
//	{
//		int v=graph[u][i];
//		if(colored[v] && color[v]==Black)
//		{
//			can =false;
//			break;
//		}
//	}
//	colored[u]=true;
//	if(can)
//	{
//		color[u]=Black;
//		DFS(u+1);
//	}
//	color[u]=White;
//	DFS(u+1);
//	colored[u]=false;
//}
//
//int main()
//{	
//	//Read();
//	scanf("%d",&t);
//	while (t--)
//	{
//		cin>>n>>m;
//		Max=-1;
//		graph.clear();
//		graph.resize(n);
//		colored.assign(n,false);
//		for (int i = 0; i < m; i++)
//		{
//			int j,k;
//			cin>>j>>k;
//			j--,k--;
//			graph[j].push_back(k);
//			graph[k].push_back(j);
//		}
//		DFS(0);
//		printf("%d\n",Max);
//		for (int i = 0; i < answer.size(); i++)
//		{
//			printf("%d",answer[i]+1);
//			if(i!=answer.size()-1)
//				cout<<" ";
//			else
//				cout<<endl;
//		}
//	}
//	return 0;
//}