//#include<iostream>
//#include<map>
//#include<stack>
//#include<isqueue>
//#include<set>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	map <string,string> my;
//	map<string,string>::iterator it;
//	string str,key,value;
//
//	while( getline(cin,str) && str!="")
//	{
//		bool found=false;
//		for(int i=0; i<str.size(); i++)
//		{
//			if(str[i]==' ')
//				found=true;
//			else if (found==true)
//				value+=str[i];
//			else
//				key+=str[i];
//		}
//		my[value]=key;
//		str="",key="",value="";
//	}
//	while(getline(cin,value)&& value!="")
//	{
//		it=my.find(value);
//		if(it==my.end())
//			cout<<"eh"<<endl;
//		else
//			cout<<(*it).second<<endl;
//	}
//	return 0;
//}