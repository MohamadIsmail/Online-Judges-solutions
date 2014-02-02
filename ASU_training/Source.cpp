#include <iostream>
using namespace std;
int main ()
{
    int Length , Width;
    cout<<"Length=";
	cin>>Length;
	cout<<"Width=";
	cin>>Width;


    int Perimeter , Area;
    Perimeter= 2*(Length+Width);
    Area=Length*Width;
    cout<<"Area="<<Area<<endl;
    cout<<"Perimeter="<<Perimeter<<endl;
	system("pause");
    return 0 ;
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
//int main()
//{
//	//freopen("1.txt","r",stdin);
//	int n,m,k,arr[100005];
//	while (cin >> n >> m >> k)
//	{
//		int x=0,y=0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			if(arr[i]==1)
//				x++;
//			else 
//				y++;
//		}
//		x-=m;
//		y-=k;
//		int num=0;
//
//	}
//	return 0;
//}
