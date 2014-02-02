//#include<iostream>
//#include<cstring>
//#include<string>
//#include<cctype>
//#include<vector>
//using namespace std;
//
//int DP[1000][1000];
//vector<string> vec_1 , vec_2;
//
//int solve(int i ,int j)
//{
//	if(i==-1 || j==-1)
//		return 0;
//	if(DP[i][j]!=-1)
//		return DP[i][j];
//	if(vec_1[i]==vec_2[j])
//		return DP[i][j]=solve(i-1,j-1)+1;
//	int first=solve(i-1,j);
//	int second=solve(i,j-1);
//	return DP[i][j]=max(first,second);		
//}
//
//int main()
//{
//	string str,arr,str_1;
//	int case_num=1;
//	while(getline(cin,arr))
//	{
//		getline(cin,str);
//		if(case_num<10)	 
//			cout<<" ";
//		cout<<case_num++<<". ";
//		if(str=="" || arr=="")
//		{
//			cout<<"Blank!\n";
//			continue;
//		}
//		cout<<"Length of longest match: ";
//		str_1="";
//		for(int i=0; i<arr.size(); i++)
//		{
//			if(isalnum(arr[i]))
//				str_1+=arr[i];
//			else
//			{
//				if( str_1!="")
//				{
//					vec_1.push_back(str_1);
//					str_1="";
//				}
//			}
//			if (i==arr.size()-1 && str_1!="")
//			{
//				vec_1.push_back(str_1);
//				str_1="";
//			}
//		}
//		str_1="";
//		for(int i=0; i<str.size(); i++)
//		{
//			if(isalnum(str[i]))
//				str_1+=str[i];
//			else
//			{
//				if( str_1!="")
//				{
//					vec_2.push_back(str_1);
//					str_1="";
//				}
//			}	
//			if (i==str.size()-1 && str_1!="")
//			{
//				vec_2.push_back(str_1);
//				str_1="";
//			}
//		}
//		memset(DP,-1,sizeof(DP));
//		cout<<solve(vec_1.size()-1,vec_2.size()-1)<<endl;
//		vec_1.clear();
//		vec_2.clear();
//	}
//	return 0;
//}