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
//int main() {
//	//Read();
//	int n,arr[10005]; 
//	while (cin >> n)
//	{
//		
//		long long sum=0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			sum+=arr[i];
//		}
//		if(sum%n)
//		{
//			cout <<"-1\n" ;
//			continue;
//		}
//		sum/=n;
//		int count=1;
//		int pos=0;
//        while(arr[pos]<sum)
//        {
//            count+=(sum-arr[pos]);
//            pos++;
//        }
//		cout << count<< endl;
//	}
//	return 0;
//}