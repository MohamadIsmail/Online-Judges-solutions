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
//char graph [52][52];
//int n,m,dx[]={0,0,1,-1},dy[]={1,-1,0,0},counter;
//
//bool checkBoundaries(int i, int j) {
//
//	if (i < 0 || j < 0 || i == m || j == n)	
//		return false;
//	return true;
//}
//
//void DFS2(int i ,int j)
//{
//	if(checkBoundaries(i,j)&& graph[i][j]=='X'){
//		graph[i][j]='*';
//		for (int k = 0; k < 4; k++)
//		{
//			int x=i+dx[k],y=j+dy[k];
//			DFS2(x,y);
//		}
//	}
//}
//void DFS(int i,int j)
//{
//	if(!checkBoundaries(i,j) || graph[i][j]=='.')
//		return ;
//	if(graph[i][j]=='X')
//	{
//		counter++;
//		DFS2(i,j);
//	}
//	graph[i][j]='.';
//	for (int k = 0; k < 4; k++)
//	{
//		int x=i+dx[k],y=j+dy[k];
//		DFS(x,y);
//	}
//}
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	int Case=0;
//	while (cin>>n>>m && m && n)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			string str;
//			scanf("%s",graph[i]);
//		}
//		vector<int >out;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if(graph[i][j]!='.' ){
//					counter=0;
//					DFS(i,j);
//					out.push_back(counter);
//				}
//			}
//		}
//		sort(out.begin(),out.end());
//		printf("Throw %d\n",++Case );
//		for (int i = 0; i < out.size(); i++)
//		{
//			printf("%d",out[i]);
//			if(i!=out.size()-1)
//				printf(" ");
//			else
//				printf("\n\n");
//		}
//	}
//	return 0;
//}