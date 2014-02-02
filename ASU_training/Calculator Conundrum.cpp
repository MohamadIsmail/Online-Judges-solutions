#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	freopen("1.txt", "r", stdin);
	freopen("2.txt", "w", stdout);
	int T,N;
	cin >> T;
	cin.ignore();
	for(int Case=1; Case<=T; Case++)
	{
		long long res=1,counter=0;
		string str;
		getline(cin,str);
		for (int i = 0; i < str.size(); i++)
		{
			if(str[i]==' ')
				counter++;
		}
		int temp=20-(str.size()-counter);
		for (int i = 1; i <=counter; i++)
		{
			res*=temp--;
		}
		cout <<"Case #"<< Case<< ": " <<res << endl;
	}
	return 0;
}
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
//#define Fore(it, x) for(it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen("2.txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//#define vi vector<int>
//#define all(x) x.begin(),x.end()
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//typedef unsigned long long ull;
//typedef long double lld;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//
//int main()
//{
//	Read();
//	return 0;
//}
