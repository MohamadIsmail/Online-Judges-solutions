//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str;
//	while(cin>>str)
//	{
//		int arr[8][8]={0},count=0,i=0,j=0,k,m; 
//		for(int l=0; l<str.size(); l++)
//		{
//			if((int)str[l] >= 48 && (int)str[l] <= 57)
//				j+=str[l];
//			if( str[l]=='q' || str[l]=='Q' )
//			{
//				for(k=i; k<8; k++)
//					arr[k][j]=1;
//				for(k=j,m=i; k<8 ,m<8; k++,m++)
//					arr[m][k]=1;
//				for(k=j,m=i; k<8 ,m<8; k--,m--)
//					arr[m][k]=1;				
//				for( k=j; k<8; k++)
//					arr[i][k]=1;
//			}
//			if( str[l]=='k' || str[l]=='K' )
//			{
//				for( k=i; k<8; k++)
//					arr[k][j]=1;
//				for(k=j,m=i; k<8 ,m<8; k++,m++)
//					arr[m][k]=1;
//				for(k=j,m=i; k<8 ,m<8; k--,m--)
//					arr[m][k]=1;				
//				for(k=j; k<8; k++)
//					arr[i][k]=1;
//			}
//			if( str[l]=='r' || str[l]=='R' )
//			{
//				for(int k=i; k<8; k++)
//					arr[k][j]=1;
//				for(int k=j,m=i; k<8 ,m<8; k++,m++)
//					arr[m][k]=1;
//				for(int k=j,m=i; k<8 ,m<8; k--,m--)
//					arr[m][k]=1;				
//				for(int k=j; k<8; k++)
//					arr[i][k]=1;
//			}
//			if( str[l]=='b' || str[l]=='B' )
//			{
//				for(int k=i; k<8; k++)
//					arr[k][j]=1;
//				for(int k=j,m=i; k<8 ,m<8; k++,m++)
//					arr[m][k]=1;
//				for(int k=j,m=i; k<8 ,m<8; k--,m--)
//					arr[m][k]=1;				
//				for(int k=j; k<8; k++)
//					arr[i][k]=1;
//			}
//			if( str[l]=='n' || str[l]=='N' )
//			{
//				k=i-2,m=j-1;
//				if(k>=0 && m>=0)
//					arr[k][m]=1;
//				k=i-2,m=j+1;
//				if(k>=0 && m<8)
//					arr[k][m]=1;
//				k=i-1,m=j+2;
//				if(k>=0 && m<8)
//					arr[k][m]=1;
//				k=i-1,m=j-2;
//				if(k>=0 && m<8)
//					arr[k][m]=1;
//				///////////////
//				k=i+2,m=j-1;
//				if(k<8 && m>=0)
//					arr[k][m]=1;
//				k=i+2,m=j+1;
//				if(k<8 && m<8)
//					arr[k][m]=1;
//				k=i+1,m=j+2;
//				if(k<8 && m<8)
//					arr[k][m]=1;
//				k=i+1,m=j-2;
//				if(k<8 && m>=0)
//					arr[k][m]=1;
//			}
//			if(str[l]=='/')i++;
//		}
//		cout<<endl;
//	}
//	return 0;
//}