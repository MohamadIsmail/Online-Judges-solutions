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
//char str[3],arr[3];
//struct point
//{
//	int x;int y;
//};
//bool visited[9][9];
//int distx[]={1,2,1,2,-1,-1,-2,-2};
//int disty[]={2,1,-2,-1,2,-2,1,-1},dist[9][9];
//
//void BFS(int sourcex,int sourcey ,int endx,int endy)
//{
//	point source={sourcex,sourcey};
//	queue<point>q;
//	memset(visited,false,sizeof(visited));
//	dist[sourcex][sourcey] = 0;
//	q.push(source);
//	while (!q.empty()) {
//		point u = q.front(); 
//		if(u.x==endx && u.y==endy)
//		{
//			printf("To get from %s to %s takes %d knight moves.\n",str,arr,dist[endx][endy]);
//			return ;
//		}
//		q.pop();
//		for (int i = 0; i <8; i++) {
//			int X=u.x+distx[i],Y=u.y+disty[i];
//			if ( X>0 && X<9 && Y<9 && Y>0 && !visited[X][Y]) {
//				dist[X][Y] = dist[u.x][u.y] + 1;
//				visited[X][Y]=true;
//				point p1={X,Y};
//				q.push(p1);    
//			}
//		}
//	}
//}
//int main()
//{
//	while (cin>>str>>arr)
//	{
//		int x1,y1,x2,y2;
//		y1=str[0]-'`';
//		x1=str[1]-'0';
//		y2=arr[0]-'`';
//		x2=arr[1]-'0';
//		BFS(x1,y1,x2,y2);
//	}
//	return 0;
//}