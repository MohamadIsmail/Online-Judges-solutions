//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string f;
//	int arr[500][500],w,h,n,count,x1,x2,y1,y2;
//	while(cin>>w>>h>>n)
//	{
//		getline(cin,f);
//		if((w==0)&&(h==0)&&(n==0))break;
//		count=0;
//		for(int i=0; i<w; i++)
//		{
//			for(int j=0; j<h; j++)
//				arr[i][j]=0;
//		}
//		for(int m=0; m<n; m++)
//		{
//			cin>>x1>>y1>>x2>>y2;
//			x1-=1,y1-=1,x2-=1,y2-=1;
//			if(x1>x2)
//				swap(x1,x2);
//			if(y1>y2)
//				swap(y1,y2);
//			for(int i=x1; i<=x2; i++)
//			{
//				for(int j=y1; j<=y2; j++)
//					arr[i][j]=1;
//			}
//		}
//		for(int m=0; m<w; m++)
//		{
//			for(int l=0; l<h; l++)
//			{
//				if(arr[m][l]==0)
//					count++;
//			}
//		}
//		if(count==0)
//			cout<<"There is no empty spots.\n";
//		else if(count==1)
//			cout<<"There is one empty spot.\n";
//		else
//			cout<<"There are "<<count<<" empty spots.\n";
//	}
//	return 0;
//}