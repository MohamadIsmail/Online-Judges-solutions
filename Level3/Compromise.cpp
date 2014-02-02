//#include<iostream>
//#include<cstring>
//#include<string>
//#include<cctype>
//#include<vector>
//using namespace std;
//
//int Table[102][102];
//vector<string> vec_1 , vec_2;
//
//void LCS()
//{
//	for(int i=0; i<=vec_1.size(); i++)
//		Table[0][i]=0;
//	for(int i=0; i<=vec_2.size(); i++)
//		Table[i][0]=0;
//	for(int i=1; i<=vec_1.size(); i++)
//	{
//		for(int j=1; j<=vec_2.size(); j++)
//		{
//			if(vec_1[i-1]==vec_2[j-1])
//				Table[i][j]=Table[i-1][j-1]+1;
//			else
//				Table[i][j]=max(Table[i][j-1],Table[i-1][j]);
//		}
//	}
//}
//string Print_LCS(int i, int j)
//{
//	if(i==0 || j==0)
//		return "";
//	if(vec_1[i-1]==vec_2[j-1])
//		return Print_LCS(i-1,j-1)+vec_1[i-1]+' ';
//	else if(Table[i][j-1]>Table[i-1][j])
//		return Print_LCS(i,j-1);
//	else
//		return Print_LCS(i-1,j);
//}
//int main()
//{
//	string arr,str_1;
//	bool check=false;
//	while(getline(cin,arr))
//	{
//		if(arr!="#" )
//		{
//			if(!check)
//			{
//				str_1="";
//				for(int i=0; i<arr.size(); i++)
//				{
//					if(isalnum(arr[i]))
//						str_1+=arr[i];
//					else
//					{
//						if( str_1!="")
//						{
//							vec_1.push_back(str_1);
//							str_1="";
//						}
//					}
//					if (i==arr.size()-1 && str_1!="")
//					{
//						vec_1.push_back(str_1);
//						str_1="";
//					}
//				}
//			}
//			else
//			{
//				str_1="";
//				for(int i=0; i<arr.size(); i++)
//				{
//					if(isalnum(arr[i]))
//						str_1+=arr[i];
//					else
//					{
//						if( str_1!="")
//						{
//							vec_2.push_back(str_1);
//							str_1="";
//						}
//					}	
//					if (i==arr.size()-1 && str_1!="")
//					{
//						vec_2.push_back(str_1);
//						str_1="";
//					}
//				}
//			}
//		}
//		else
//		{
//			if(!check)
//				check=true;
//			else
//			{
//				LCS();
//				string vec=Print_LCS(vec_1.size(), vec_2.size());
//				for(int i=0; i<vec.size()-1; i++)
//					cout<<vec[i];
//				cout<<endl;
//				vec_1.clear();
//				vec_2.clear();
//				check=false;
//			}
//		}
//	}
//	return 0;
//}