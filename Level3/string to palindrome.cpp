//#include<iostream>
//#include<cstring>
//#include<string>
//#include<cctype>
//#include<vector>
//using namespace std;
//
//int DP[1003][1003];
//string arr;
//
//int min(int x, int y, int z)
//{
//    int t = x < y ? x : y;
//    return t = z < t ? z : t;
//}
//
//int Edit_distance(int i ,int j, int mid)
//{
//	if(i>=j)
//		return 0;
//	if(DP[i][j]!=-1)
//		return DP[i][j];
//
//	if(arr[i]==arr[j])
//		DP[i][j]=Edit_distance(i+1,j-1,mid);
//	else
//	{
//		int first=Edit_distance(i, j-1,mid)+1;
//		int sec=Edit_distance(i+1, j, mid)+1;
//		int eq=Edit_distance(i+1,j-1 ,mid)+1;
//		DP[i][j] = min(first,sec,eq);
//	}
//	return DP[i][j];
//}
//
//int main()
//{
//	int t,counter=1;
//	cin>>t;
//	cin.ignore();
//	
//	while(t--)
//	{
//		memset(DP,-1,sizeof(DP));
//		getline(cin,arr);
//		cout<<"Case "<<counter++<<": "<<Edit_distance(0,arr.size()-1,arr.size()/2)<<endl;
//	}
//	return 0;
//}