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
//
//struct Edge 
//{ 
//    int From; 
//    int To; 
//    int Distance ; 
//}; 
//int nEdges, nVertices; 
//Edge arr[20001]; 
//int Rank[202]; 
//int Parent[202]; 
//  
//struct DisjointSet 
//{ 
//    int NumberOfComponents ; 
//    DisjointSet() 
//    { 
//        NumberOfComponents = 0 ; 
//    } 
//    void Add (int x) 
//    { 
//        Parent[x] = x ; 
//        Rank[x] = 0 ; 
//        ++NumberOfComponents; 
//    } 
//    int Find (int x) 
//    { 
//        if ( x != Parent[x] ) 
//            Parent[x] = Find(Parent[x]); 
//        return Parent[x] ; 
//    } 
//    bool Union ( int X , int Y ) 
//    { 
//        int ParentOfX = Find(X); 
//        int ParentOfY = Find(Y); 
//        if ( ParentOfX == ParentOfY )return false ; 
//        -- NumberOfComponents ; 
//        if (Rank[ParentOfX] > Rank[ParentOfY]) 
//            Parent[ParentOfY] = ParentOfX ; 
//        else
//            Parent[ParentOfX] = ParentOfY ; 
//        if (Rank[ParentOfX] == Rank[ParentOfY]) 
//            Rank[ParentOfY] = Rank[ParentOfY] + 1 ; 
//        return true ; 
//    } 
//}; 
//bool pred(Edge a, Edge b) { 
//    return (a.Distance<b.Distance) ; 
//} 
//int MST_Kruskal() { 
//    DisjointSet DS ; 
//    For(i, 1, nVertices + 1)
//        DS.Add(i); 
//    sort(arr,arr + nEdges, pred); 
//    int res = 0; 
//    For(i,0,nEdges) 
//        if (DS.Union(arr[i].From,arr[i].To)) 
//            res = max(res, arr[i].Distance); 
//    if(DS.NumberOfComponents != 1) 
//        return -1; 
//    return res; 
//} 
//
//int main()
//{
////	Read();
//	int t; 
//	cin >> t;
//	while (t--)
//	{
//		cin >> nVertices >> nEdges;
//		for (int i = 0; i < nEdges; i++)
//		{
//			cin >> arr[i].From >> arr[i].To >> arr[i].Distance;
//		}
//		int res=MST_Kruskal();
//		if(res==-1)
//			cout <<"-1\n";
//		else
//		cout <<ceil( res/10.0)<< endl;
//	}
//	return 0;
//}