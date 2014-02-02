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
//#include <string>
//#include <cctype>
//#include <string.h>
//using namespace std;
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//#define pi acos(-1.0)
//#define INF 1e9
//#define ll long long
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
//typedef pair<PAIR ,int> PAIR2;
//typedef unsigned long long ull;
//typedef long double lld;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//int x, y, c[3][11], cost[100005], cnt[100005];  
//bool inq[100005];  
//queue<int> q; 
//#define oo 1e9;
//
//void relax(int u, int w1, int w2)  
//{  
//    if(cost[u] > w1)  
//    {  
//        cost[u] = w1;  
//        cnt[u] = w2;  
//        if(!inq[u]) q.push(u);  
//    }  
//    else if(cost[u] == w1 && cnt[u] > w2)  
//    {  
//        cnt[u] = w2;  
//        if(!inq[u]) q.push(u);  
//    }  
//}  
//void dij(int s){
//	for(int i = 0; i < 100005; i++){
//		cost[i] =cnt[i]=oo ; inq[i] = 0;
//	}
//	cost [s]=cnt[s]=0;
//	q.push(s);
//	while(!q.empty())  
//    {  
//        int u = q.front(); q.pop();  
//        inq[u] = false;  
//        For(i,0, 10)  
//        {  
//            int v = u*10 + i;  
//            if(v > y) continue;  
//            relax(v, cost[u] + c[0][i], cnt[u] + 1);  
//        }  
//        For(i, 1, 10)  
//        {  
//            int v = u + i;  
//            if(v > y) continue;  
//            relax(v, cost[u] + c[1][i], cnt[u] + 1);  
//        }  
//        For(i,0, 10)  
//        {  
//            int v = u*i;  
//            if(v > y || i == 1) continue;  
//            relax(v, cost[u] + c[2][i], cnt[u] + 1);  
//        }  
//    }  
//}
//int main() {
//	int t = 1;
//	while (cin >> x >> y) {
//		For(i,0,3) For(j,0,10){
//				cin >> c[i][j];
//		}
//		dij(x);
//		printf("Case %d: %d %d\n", t++, cost[y],cnt[y]);
//	}
//}