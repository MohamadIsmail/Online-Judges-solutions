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
//#include <cstdlib>
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
//#define maxn 2504
//struct my{
//	int idx,ch;
//};
//int  d[maxn*maxn] ;
//my c[maxn*maxn];
//
//vector<int> location[26] ;
//string LCS(string a,string b)  
//{  
//	int i , j , k , w , ans , l , r , mid ;  
//	for( i = 0 ; i < 26 ; i++) location[i].clear() ;  
//	for( i = sz(b)-1 ; i >= 0 ; i--) location[b[i]-'A'].push_back(i) ;  
//	for( i = k = 0 ; a[i] ; i++)  
//	{  
//		for( j = 0 ; j < location[w=a[i]-'A'].size() ; j++,k++) c[k].idx = location[w][j] ,c[k].ch=w;  
//	}  
//	d[1] = c[0].idx ;   d[0] = -1 ;  
//	string res;
//	res+=c[0].ch+'A';
//	for( i = ans = 1 ; i < k ; i++)  
//	{  
//		l = 0 ; r = ans ;  
//		while( l <= r )  
//		{  
//			mid = ( l + r ) >> 1 ;  
//			if( d[mid] >= c[i].idx ) r = mid - 1 ;  
//			else l = mid + 1 ;  
//		}  
//		if( r == ans ) {
//			ans++,d[r+1] = c[i].idx;
//			res+=c[i].ch+'A' ; 
//		} 
//		else if( d[r+1] > c[i].idx ) d[r+1] = c[i].idx ;  
//	}  
//	//return ans ;  
//	return res;
//}
//
//int main()
//{
//	freopen("1.txt","r",stdin);
//	string a, b;
//	while(cin >> a >> b)
//	{
//		cout << LCS(a,b)<< endl;
//	}
//	return 0;
//}