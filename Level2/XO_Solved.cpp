//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string player1, player2;
//	int x,y,arr[3][3],w=3;
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0; j<3; j++)
//		{
//			arr[i][j]=w;
//			w++;
//		}
//	}
//	getline(cin,player1);
//	bool d=false;
//	getline(cin,player2);
//	for(int m=1; m<=9; m++)
//	{
//		cin>>x>>y;
//		x-=1,y-=1;
//		if(m%2==1)
//		{
//			arr[x][y]=2;
//			if(((arr[0][0]==arr[1][1])&&(arr[0][0]==arr[2][2]))||((arr[2][0]==arr[1][1])&&(arr[2][0]==arr[0][2])))
//			{
//				cout<<player1<<" Wins\n";
//				d=true;
//				break;
//			}
//			for(int i=0; i<3; i++)
//			{
//				if(((arr[i][0]==arr[i][1])&&(arr[i][2]==arr[i][0]))||((arr[0][i]==arr[1][i])&&(arr[0][i]==arr[2][i])))
//				{
//					cout<<player1<<" Wins\n";
//					d=true;
//					break;
//				}
//			}
//		}
//		else
//		{
//			arr[x][y]=1;
//			if(((arr[0][0]==arr[1][1])&&(arr[0][0]==arr[2][2]))||((arr[2][0]==arr[1][1])&&(arr[2][0]==arr[0][2])))
//			{
//				cout<<player2<<" Wins\n";
//				d=true;
//				break;
//			}
//			for(int i=0; i<3; i++)
//			{
//				if(((arr[i][0]==arr[i][1])&&(arr[i][2]==arr[i][0]))||((arr[0][i]==arr[1][i])&&(arr[0][i]==arr[2][i])))
//				{
//					cout<<player2<<" Wins\n";
//					d=true;
//					break;
//				}
//			}
//		}
//		if(d==true)break;
//		if((m==9)&&(d==false))
//			cout<<"   No Winner \n";
//	}
//	return 0;
//}