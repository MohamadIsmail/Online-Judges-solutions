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
//int board[8][8],queens[8],Max;
//bool co[8];
//void solve(int index)
//{
//	if(index==8)
//	{
//		int sum=0;
//		for (int i = 0; i < 8; i++)
//		{
//			sum+=board[i][queens[i]];
//		}
//		Max=max(Max,sum);
//	}
//	else
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			if(!co[i])
//			{
//				int j;
//				for ( j = 0; j < index; j++)
//				{
//					if((queens[j]+index-j) ==i || (queens[j]-index+j) ==i )
//						break;
//				}
//					if(j==index){
//						co[i]=true;
//						queens[index]=i;
//						solve(index+1);
//						co[i]=false;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	int t;
//	scanf("%d",&t);
//	while (t--)
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			for (int j = 0; j < 8; j++)
//			{
//				scanf("%d",&board[i][j]);
//			}
//		}
//		mem(co,false);
//		Max=0;
//		solve(0);
//		printf("%5d\n",Max);
//
//	}
//	return 0;
//}