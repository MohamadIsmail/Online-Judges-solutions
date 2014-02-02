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
//
//int  a[100005], b[100005];
//int  N, m, k, l, r;
//void  BIT ( int  i, int  d)
//{
//    while (i <= N)
//    {
//        b [i] += d;
//        i += i &-i;
//    }
//}
//int Sum ( int  i)
//{
//    int  sum = 0;
//    while (i)
//    {
//        sum += b[i];
//        i-= i &-i;
//    }
//    return  sum;
//}
//int  main ()
//{
//	Read();
//    int  tmp, count = 1;
//    while (cin >> N >> m >> k)
//    {
//        tmp = 0;
//        memset (b, 0, sizeof (b));
//        for (int i = 1; i <= N; i++)
//            scanf ( "%d" , & a [i]);
//        sort(a+1,a+N+1);
//        int  pre = 0;
//        while (m --)
//        {
//            int  x, y;
//            scanf ( "%d%d" , & x, & y);
//            r = upper_bound(a+1, a+N+1, x)-a;
//            l = upper_bound(a+1, a+N+1, pre)-a;
//            BIT (l, 1);
//            BIT (r, -1);
//            pre = y;
//        }
//        for ( int  i = 1; i <= N; i++)
//        {
//            if (Sum (i)>= k)
//                tmp++;
//        }
//        cout << "Case " << count++ << ": " ;
//        cout << tmp << endl;
//    }
//}