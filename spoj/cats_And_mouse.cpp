//#include<iostream>
//#include<cmath>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int width,height,test,x1,x2,x3,y1,y2,y3;
//	freopen("1.txt", "rt", stdin);
//	while(cin>>width>>height)
//	{
//		cin>>test;
//		for (int i = 0; i < test; i++)
//		{
//			//memset(arr,0,sizeof(arr));
//			bool esc=true,left=true,right=true,up=true,down=true;
//			cin>>x1>>y1>>x2>>y2>>x3>>y3;
//			if(x1==1 ||x1==width || y1==1 ||y1==height)
//			{
//				cout<<"YES\n";continue;
//			}
//			int tempx=x1-1,tempy=y1;
//			if((tempx==x2+1 && tempy==y2)|| (tempx==x3+1 && tempy==y3)/*UP*/ || (tempx==x2 && tempy==y2+1)||(tempx==x3 && tempy==y3+1)/*right*/||(tempx==x2 && tempy==y2-1)||(tempx==x3 && tempy==y3-1)/*left*/)
//				up=false;
//			tempx=x1,tempy=y1-1;
//			if((tempx==x2+1 && tempy==y2)|| (tempx==x3+1 && tempy==y3)/*UP*/ || (tempx==x2 && tempy==y2+1)||(tempx==x3 && tempy==y3+1)/*right*/||(tempx==x2-1 && tempy==y2)||(tempx==x3-1 && tempy==y3)/*down*/)
//				left=false;
//			tempx=x1+1,tempy=y1;
//			if((tempx==x2 && tempy==y2+1)||(tempx==x3 && tempy==y3+1)/*right*/||(tempx==x2 && tempy==y2-1)||(tempx==x3 && tempy==y3-1)/*left*/||(tempx==x2-1 && tempy==y2)||(tempx==x3-1 && tempy==y3)/*down*/)
//				down=false;
//			tempx=x1,tempy=y1-1;
//			if((tempx==x2+1 && tempy==y2)|| (tempx==x3+1 && tempy==y3)/*UP*/ || (tempx==x2 && tempy==y2+1)||(tempx==x3 && tempy==y3+1)/*right*/||(tempx==x2-1 && tempy==y2)||(tempx==x3-1 && tempy==y3)/*down*/)
//				right=false;
//
//			if(!up && !down && !left && !right )
//				esc=false;
//			if(esc)
//				cout<<"YES\n";
//			else
//				cout<<"NO\n";
//		}
//	}
//	return 0;
//}