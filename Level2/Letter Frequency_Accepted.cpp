//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string arr,str;
//	int T;
//	cin>>T;
//	cin.ignore();
//	for(int i=1; i<=T; i++)
//	{
//		int max=-1,x,y,arr_1[200];
//		str="";
//		getline(cin,arr);
//		for(int j=0; j<arr.size(); j++)
//		{
//			x=(int)arr[j];
//			if(((x>=65)&&(x<=90))||((x>=97)&&(x<=122)))
//				str+=tolower(arr[j]);
//		}
//		for(int j=0; j<str.size(); j++)
//		{
//			x=1;
//			for(int l=j+1; l<str.size(); l++)
//			{
//				if(str[l]==str[j])
//				{
//					x++;
//					str.erase(str.begin()+l);
//					l--;
//				}
//			}
//			if(max<x)
//				max=x;
//			arr_1[j]=x;
//		}
//		arr="";
//		for(int j=0; j<str.size(); j++)
//		{
//			if(arr_1[j]>=max)
//				arr+=str[j];
//		}
//		sort(arr.begin(),arr.end());
//		cout<<arr<<endl;
//	}
//	return 0;
//}