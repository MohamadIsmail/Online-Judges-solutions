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
////typedef pair<int ,int>PAIR;
//
//struct point
//{
//	int x;int y;
//};
//bool visited[103][103];
//int distx[]={1,-1,0,0};
//int dist1[103][103],dist2[103][103],dist3[103][103];
//int disty[]={0,0,-1,1},width,length;
//
//void BFS(int sourcex,int sourcey ,int dist[][103])
//{
//	point source={sourcex,sourcey};
//	queue<point>q;
//	memset(visited,false,sizeof(visited));
//	memset(dist,INT_MAX,sizeof(dist));
//	dist[sourcex][sourcey] = 0;
//	q.push(source);
//	while (!q.empty()) {
//		point u = q.front(); 
//		q.pop();
//		for (int i = 0; i <4; i++) {
//			int X=u.x+distx[i],Y=u.y+disty[i];
//			if ( X>0 && X<=width && Y<=length && Y>0 && !visited[X][Y] && dist[u.x][u.y]+1< dist[X][Y]) {
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
//	while (cin>>width>>length)
//	{
//		int x1,y1,x2,y2,x3,y3,n;
//		cin>>n;
//		for (int i = 0; i < n; i++)
//		{
//			bool flag1=false;
//			cin>>x1>>y1>>x2>>y2>>x3>>y3;
//			BFS(x1,y1,dist1);
//			BFS(x2,y2,dist2);
//			BFS(x3,y3,dist3);
//
//			for (int i = 1; i <= width; i++)
//			{
//				if(dist1[i][1]<dist2[i][1] && dist1[i][1]<dist3[i][1]){
//					flag1=true;break;
//				}
//				if(dist1[i][length]<dist2[i][length] && dist1[i][length]<dist3[i][length]){
//					flag1=true;break;
//				}
//			}
//			if(!flag1){
//				for (int i = 1; i <= length; i++)
//				{
//					//PAIR x=make_pair(1,i);
//					if(dist1[1][i]<dist2[1][i] && dist1[1][i]<dist3[1][i]){
//						flag1=true;break;
//					}
//					//x=make_pair(width,i);
//					if(dist1[1][i]<dist2[1][i] && dist1[1][i]<dist3[1][i]){
//						flag1=true;break;
//					}
//				}
//			}
//			if(!flag1)
//				printf("NO\n");
//			else
//				printf("YES\n");
//		}	
//	}
//	return 0;
//}