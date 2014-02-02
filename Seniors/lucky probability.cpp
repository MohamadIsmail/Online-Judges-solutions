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
//
//vector<int> lucky;
//
//void generate_lucky(long long num)
//{
//	if(num > INF)
//		return ;
//	lucky.push_back(num);
//	generate_lucky(num*10 +4);
//	generate_lucky(num * 10 +7);
//}
//
//int intersect(int a, int b, int c ,int d)
//{
//	if(a > d || b < c)
//		return 0;
//	return min(b,d)- max(a,c)+1;
//}
//
//int main()
//{
//	//Read();
//	int p1, pr, v1,vr ,k;
//
//	while ( cin>> p1 >> pr >> v1 >> vr >> k)
//	{
//		double ans=0;
//		lucky.clear();
//		generate_lucky(7);
//		generate_lucky(4);
//		sort(lucky.begin(),lucky.end());
//		for (int i = 0; i <= lucky.size()-k; i++)
//		{
//			int a1,a2,b1,b2;
//			if(!i)
//				a1 =0;
//			else
//				a1= lucky[i-1]+1;
//			a2 = lucky[i];
//
//			b1= lucky[i+k-1];
//			if(i+k >= lucky.size())
//				b2=INF;
//			else
//				b2= lucky[i+k]-1;
//			double prob1= intersect(p1,pr,a1,a2);
//			double prob2= intersect(v1,vr,b1,b2);
//			ans+=prob1* prob2;
//			prob1= intersect(p1,pr,b1,b2);
//			prob2= intersect(v1,vr,a1,a2);
//			ans+=prob1*prob2;
//			if(k==1 && lucky[i] >=p1 && lucky[i]<=pr && lucky[i] >=v1 && lucky[i] <=vr)
//				ans--;
//		}
//		ans/=(double)(pr-p1+1);
//		ans/=(double)(vr-v1+1);
//		printf("%.12llf\n",ans);
//	}	
//	return 0;
//}