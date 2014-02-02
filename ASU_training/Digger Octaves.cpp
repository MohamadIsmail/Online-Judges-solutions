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
//
//int n,dx[]={0,0,1,-1},dy[]={1,-1,0,0};
//char arr[8][8];
//bool checkBoundaries(int i, int j) {
//
//	return (i < 0 || j < 0 || i == n || j == n);
//}
//set<string>my;
//int solve(int i, int j, int k ,string state )
//{
//	if(checkBoundaries(i,j) || arr[i][j]=='.')
//		return 0;
//	if(k==8)
//	{
//		if(my.find(state) != my.end())
//			return 0;
//		my.insert(state);
//		return 1;
//	}
//	int ret = 0;
//        for(int d = 0; d < 4; ++d) {
//                int nx = i + dx[d];
//                int ny = j + dy[d];
//				if(checkBoundaries(ny, nx) || arr[nx][ny] == '.' || state[nx * n + ny] == '1')
//                        continue;
//				state[nx * n + ny] = '1';
//				ret += solve(nx, ny, k + 1, state);
//                state[nx * n + ny] = '0';
//        }
//        return ret;
//}
//
//string str(int i,int j)
//{
//	string str2(n*n,'0');
//	str2[i*n+j]='1';
//	return str2;
//}
//int main()
//{
//	//freopen("1.txt","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while (t--)
//	{
//		scanf("%d",&n);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin>>arr[i][j];
//			}
//		}
//		int sum=0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if(arr[i][j]=='X')
//					sum+=solve(i,j,1,str(i,j));
//			}
//		}
//		printf("%d\n",sum);	
//		my.clear();
//	}
//}