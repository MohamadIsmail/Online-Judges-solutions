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
//#define INF 1e+9
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
//#define vi vector<int>
//int countBits(long long mask) {int res = 0; while(mask) mask &= (mask - 1), ++ res; return res;}
//
//int n,m,dp[1 << 22],vec[22],Max;
//vector <vi>masks;
//
//int solve(int index,int mask)
//{
//	 if(index == m || mask == (1 << n) - 1) 
//        return countBits(mask); 
//    int &res = dp[mask]; 
//    if(res != -1) 
//        return res; 
//    res = countBits(mask); 
//    for(int i= 0;i< masks[vec[index]].size();i++) { 
//        if(masks[vec[index]][i] > Max) 
//            break; 
//        if((masks[vec[index]][i] & mask) == 0) 
//            res = max(res, solve(index + 1, masks[vec[index]][i] | mask)); 
//    } 
//    return res; 
//}
//
//void pre() { 
//    masks.resize(300); 
//    for(int i=0;i <1 <<22; i++) { 
//        int sum = 0; 
//		for (int j = 0; j < 22; j++)
//            if(i & (1 << j)) 
//                sum += j + 1; 
//        masks[sum].pb(i); 
//    } 
//}	
//int main()
//{
//	//Read();
//	pre();
//	int turns=0;
//	while(cin >> n >>m && (n||m))
//	{
//		for (int i = 0; i < m; i++)
//		{
//			cin >> vec[i];
//		}
//		mem(dp,-1);
//		Max=(1 << n)-1;
//		cout << "Game "<< ++turns<< ": "<< solve(0,0)<< endl;
//	}
//	return 0;
//}