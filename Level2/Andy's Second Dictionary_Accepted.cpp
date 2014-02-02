//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main ()
//{
//	int n;
//	string str,arr;
//	vector<string> s;
//	while(getline(cin,str))
//	{
//		for(int i=0; i<str.size(); i++)
//		{
//			n=(int)str[i];
//			if((n>=97)&&(n<=122))
//				arr+=str[i];
//			else if((n>=65)&&(n<=90))
//			{
//				n+=32;
//				arr+=(char)n;
//			}
//			else if(n==45)
//			{
//				if(i!=str.size()-1)
//					arr+=str[i];
//			}
//			else
//			{
//				for(int j=0; j<s.size(); j++)
//				{
//					if(s[j]=="" || s[j]==arr)
//					{
//						s.erase(s.begin()+j);
//						j--;
//					}
//				}
//				s.push_back(arr);
//				arr="";
//			}
//		}
//		if(arr!="" && n!=45)
//		{
//			s.push_back(arr);
//			for(int j=0; j<s.size()-1; j++)
//			{
//				if(s[j]==arr)
//				{
//					s.erase(s.begin()+j);
//					j--;
//				}
//			}
//		}
//		str="";
//		if(n!=45)arr="";
//	}
//	sort(s.begin(), s.end());
//	for(int i=0; i<s.size(); i++)
//		cout<<s[i]<<endl;
//	return 0;
//}