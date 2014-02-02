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
//string romanNumerals [4000 + 5] = { "0", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
//
//int main() {
//
//	for ( int i = 11; i < 4000; i++ ) {
//		int tmp = i;
//		while ( tmp ) {
//			if ( tmp >= 900 && tmp < 4000 ) {
//				if ( tmp / 100 == 9 ) { romanNumerals [i] += "CM"; tmp -= 900; }
//				else { romanNumerals [i] += "M"; tmp -= 1000; }
//			}
//			if ( tmp >= 400 && tmp < 900 ) {
//				if ( tmp / 100 == 4 ) { romanNumerals [i] += "CD"; tmp -= 400; }
//				else { romanNumerals [i] += "D"; tmp -= 500; }
//			}
//			if ( tmp >= 90 && tmp < 400 ) {
//				if ( tmp / 10 == 9 ) { romanNumerals [i] += "XC"; tmp -= 90; }
//				else { romanNumerals [i] += "C"; tmp -= 100; }
//			}
//			if ( tmp >= 40 && tmp < 90 ) {
//				if ( tmp / 10 == 4 ) { romanNumerals [i] += "XL"; tmp -= 40; }
//				else { romanNumerals [i] += "L"; tmp -= 50; }
//			}
//			if ( tmp >= 1 && tmp < 40 ) {
//				for ( int j = 10; j >= 1; j-- )
//					if ( tmp >= j ) { romanNumerals [i] += romanNumerals [j]; tmp -= j; break; }
//			}
//		}
//	}
//	string inp;
//	while ( cin >> inp ) {
//		if ( isdigit (inp [0]) ) cout << romanNumerals [atoi (inp.c_str())] << endl;
//		else {
//			for ( int i = 1; i < 4000; i++ ) {
//				if ( romanNumerals [i] == inp ) { cout << i << endl; break; }
//			}
//		}
//	}
//	return 0;
//}