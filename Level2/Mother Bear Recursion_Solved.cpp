//#include<iostream>
//#include<ctype.h>
//#include<string>
//using namespace std;
//
//string str;
//
//bool bear(int i,int j)
//{
//	if(i==j)
//		return true;
//	if(!isalpha(str[i]))
//		return bear(i+1,j);
//	if(!isalpha(str[j]))
//		return bear(i,j-1);
//	if(isupper(str[i]))
//		str[i]=tolower(str[i]);
//	if(isupper(str[j]))
//		str[i]=tolower(str[j]);
//	if(str[i]!=str[j])
//		return false;
//	else
//		return bear(i+1,j-1);
//}
//
//int main()
//{ 
//	while((getline(cin,str))&&(str!="DONE"))
//	{
//		bool palin=bear(0,str.size()-1);
//		if(palin==true)
//			cout<<"Yes"<<endl;
//		else
//			cout<<"No"<<endl;
//		str="";
//	}
//	return 0;
//}