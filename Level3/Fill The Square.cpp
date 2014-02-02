//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char arr[10][10];
//	//vector<int> arr;
//	int test ,n ,case_num=0;
//	cin>>test;
//	while(test--)
//	{
//		cin>>n;
//		for(int k=0; k<n; k++)
//		{
//			for(int j=0; j<n; j++)
//				cin>>arr[k][j];
//		}
//		//sort(arr.begin(),arr.end());
//		for(int k=0; k<n; k++)
//		{
//			for(int j=0; j<n; j++)
//			{
//				int minimum=130,sec_min,third_min,fourth_min;
//				if(arr[k][j]=='.')
//				{
//					arr[k][j]='A';
//					if(arr[k][j-1]!='.' && j>0)
//						minimum=(int)arr[k][j-1];
//					if(arr[k-1][j]!='.' && k>0)
//						sec_min=(int)arr[k-1][j];
//					if(sec_min<minimum && sec_min>=65)
//						minimum=sec_min;
//					if(arr[k+1][j]!='.' && k<n-1)
//						third_min=(int)arr[k+1][j];
//					if(third_min<minimum && third_min>=65)
//						minimum=third_min;
//					if(arr[k][j+1]!='.' && j<n-1)
//						fourth_min=(int)arr[k][j+1];
//					if(fourth_min<minimum && fourth_min>=65)
//						minimum=fourth_min;
//					if(minimum==65)
//					{
//						minimum++;
//					if(minimum==sec_min)
//						minimum++;
//					if(minimum==third_min)
//						minimum++;
//					if(minimum==fourth_min)
//						minimum++;
//					arr[k][j]=(char)minimum;
//					}
//				}
//			}
//		}
//
//		cout<<"Case "<<++case_num<<":\n";
//		for(int k=0; k<n; k++)
//		{
//			for(int j=0; j<n; j++)
//				cout<<arr[k][j];
//			cout<<endl;	
//		}
//	}
//	return 0;
//}