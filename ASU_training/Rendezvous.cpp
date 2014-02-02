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
//#include <cctype>
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
//#define all(v) v.begin(),v.end()
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//#define mod 1000000007 
//
//int n,m,graph[30][30];
//
//void floyd()
//{
//	for (int k = 1; k <=n; k++)
//	{
//		for (int i = 1; i <=n; i++)
//		{
//			for (int j = 1; j <=n; j++)
//			{
//				graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
//			}
//		}
//	}
//}
//
//void initAdj(int N)
//{
//	for(int i=0;i<=N;i++){
//		for(int j=0;j<=N;j++){
//			if(i==j)
//				graph[i][j] = 0;
//			else 
//				graph[i][j] = INF_MAX;
//		}
//	}
//}
//
//int getMin(int N)
//{
//	int min = INF_MAX;
//	int minIndex = 1;
//	for(int i=1;i<=N;i++)
//	{
//		int sum = 0;
//		for(int j=1;j<=N;j++) 
//			sum += graph[i][j];
//		if(sum<min){
//			min = sum;
//			minIndex = i;
//		}          
//	}
//	return minIndex; 
//}
//
//int main()
//{
//	Read();
//	int Case=0;
//	vector<string>words;
//	while (cin >> n >> m )
//	{
//		if(!n && !m) break;
//		words.clear();
//		initAdj(n);
//		for (int i = 0; i < n; i++)
//		{
//			string str;
//			cin >> str; 
//			words.pb(str);
//		}
//		for (int i = 0; i < m; i++)
//		{
//			int x,y,z;
//			cin >> x >>y >> z; 
//			graph[x][y]=graph[y][x]=z;
//		}
//		floyd();
//		cout << "Case #"<<++Case<<" : "<<words[getMin(n)-1]<<endl;
//	}
//	return 0;
//}