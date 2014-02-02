//#include<iostream>
//#include<map>
//#include<stack>
//#include<isqueue>
//#include<set>
//#include<string>
//
//using namespace std;
//
//bool palin(string arr)
//{
//	for(int l=0; l<arr.size(); l++)
//	{
//		if(arr[l]!=arr[arr.size()-1-l])
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	set<string> my;
//	set<string>::iterator it;
//	string arr,str;
//	while(getline(cin,arr))
//	{
//		for(int i=0; i<arr.size(); i++)
//		{
//			for(int j=i; j<arr.size(); j++)
//			{
//				str=arr.substr(i,arr.size()-j);
//				bool x=palin(str);
//				if(x==true)
//					my.insert(str);
//			}
//		}
//		cout<<"The string '"<<arr<<"' contains "<<my.size()<<" palindromes.";
//		/*cout<<"\""<<arr<<"\" contains "<<my.size()<<" palindromes (";
//		for(it=my.begin(); it!=my.end(); it++)
//		{
//			cout<<*it<<" ";
//		}*/
//		cout<<endl;
//		my.clear();
//	}
//	return 0;
//}