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
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//
//int main()
//{
//	int n;
//
//	while(cin>>n){
//		int x = n/7;
//		int sum= n- (7*x);
//		while (sum % 4  && x>-1)
//		{
//			sum+=7;
//			x--;
//		}
//		if(x <0){
//			cout<<"-1\n";continue;
//		}
//		string str;
//		if(sum %4 ==0)
//			str.append(sum/4,'4');
//		str.append(x,'7');
//		cout<< str << endl;
//	}
//	return 0;
//}