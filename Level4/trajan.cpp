//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//#include<climits>
//#include<stack>
//using namespace std;
//
//vector<bool>visited;
//vector<int>traversalOrder,loworder;
//vector<vector<int> >G;
//stack<int>components;
//vector<vector<int> > scc;
//
//void trajan(int node ,int & order)
//{
//	loworder[node]=traversalOrder[node]=order++;
//	visited[node]=true;
//	components.push(node);
//	for (int i = 0; i < G[node].size(); i++)
//	{
//		int nextnode=G[node][i];
//		if(traversalOrder[nextnode] ==-1)
//			trajan(nextnode,order);
//		if(visited[nextnode])
//			loworder[node]=min(loworder[node],loworder[nextnode]);
//	}
//	if(loworder[node]== traversalOrder[node]){
//		vector<int>currentSCC;
//		while (true)
//		{
//			int current= components.top();
//			components.pop();
//			currentSCC.push_back(current);
//			if(current == node)
//				break;
//		}
//		scc.push_back(currentSCC);
//	}
//}
//int main()
//{
//	int x1,y1;
//	while (true)
//	{
//	}
//	return 0;
//}