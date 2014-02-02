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
//using namespace std;
//
//bool visited[31][31][31];
//char arr[31][31][31];
//int height,width,length,dist[31][31][31];
//int distx[]={0,0,-1,1,0,0},disty[]={1,-1,0,0,0,0},distz[]={0,0,0,0,1,-1};
//
//struct point 
//{
//	int z;int x;int y;
//};
//void BFS(int sourcez,int sourcex,int sourcey ,int endz ,int endx, int endy)
//{
//	point source={sourcez,sourcex,sourcey};
//	queue<point>q;
//	memset(dist,INT_MAX,sizeof(dist));
//	memset(visited,false,sizeof(visited));
//	int dist[31][31][31];
//	dist[sourcez][sourcex][sourcey] = 0;
//	q.push(source);
//	while (!q.empty()) {
//		point u = q.front(); 
//		if(u.x==endx && u.y==endy && u.z==endz)
//		{
//			printf("Escaped in %d minute(s).\n",dist[endz][endx][endy]);
//			return ;
//		}
//		q.pop();
//		for (int i = 0; i <6; i++) {
//			int X=u.x+distx[i],Y=u.y+disty[i],Z=u.z+distz[i];
//			if ( X>=0 && X<width && Y<length && Y>=0 && Z>=0 && Z<height && arr[Z][X][Y]!='#' && !visited[Z][X][Y]) {
//				dist[Z][X][Y] = dist[u.z][u.x][u.y] + 1;
//				visited[Z][X][Y]=true;
//				point p1={Z,X,Y};
//				q.push(p1);    
//			}
//		}
//	}
//	printf("Trapped!\n");	
//}
//int main()
//{
//	//freopen("1.txt", "rt", stdin);
//	int x1,y1,z1,x2,y2,z2;
//	while (cin>>height>>width>>length)
//	{
//		if(height==0 && width==0 && length==0)
//			break;
//		string str;
//		for (int i = 0; i < height; i++)
//		{
//			for (int j = 0; j < width; j++)
//			{
//				for (int k = 0; k < length; k++)
//				{
//					cin>>arr[i][j][k];
//					if(arr[i][j][k]=='S')
//					{
//						x1=j;y1=k;z1=i;
//					}
//					if(arr[i][j][k]=='E')
//					{
//						x2=j;y2=k;z2=i;
//					}
//				}
//			}
//			getline(cin,str);
//		}
//		BFS(z1,x1,y1,z2,x2,y2);
//	}
//	return 0;
//}