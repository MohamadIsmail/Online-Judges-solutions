//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//using namespace std;
//
//#define MAXN 203
//vector<vector<int> > adjl; 
//int n,Degree[MAXN];  
//vector<int> res;
//
//void Topological()
//{
//	queue<int> q;
//	for (int i = 0; i < n; i++)
//	{
//		if(Degree[i]==0)
//			q.push(i);
//	}
//	res.clear();
//	int x;
//	while(!q.empty())
//	{
//		x = q.front();
//		q.pop();
//		res.push_back(x);
//		for (int i = 0; i < adjl[x].size(); i++)
//		{
//			if(!--Degree[adjl[x][i]])
//				q.push(adjl[x][i]);
//		}
//	}
//}
//int main()
//{	
//	int m;
//	while (scanf("%d %d",&n,&m),(n||m))
//	{
//		memset(Degree,0,n+1);
//		adjl.clear();
//		adjl.resize(n);
//		for (int i = 0; i < m; i++)
//		{
//			int j,k;
//			scanf("%d %d",&j,&k);
//			j--;k--;
//			adjl[j].push_back(k);
//			Degree[k]++;
//		}	
//		Topological();
//		for (int i = 0; i < (int)res.size(); i++){
//			printf("%d", res[i]+1);
//			if(i<res.size()-1)
//				printf(" ");
//		}
//		printf("\n");
//	}
//}