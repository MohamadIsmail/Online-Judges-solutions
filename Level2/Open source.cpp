////#include<iostream>
////#include<map>
////#include<string>
////#include<set>
////using namespace std;
////
////int main()
////{
////	map<string,string[10000]> a1;
////	map<string,string[10000]>::iterator it,iter;
////	string str,arr;
////	set<string>myset;
////	//it=a1.begin();
////	int i=0; 
////	while(getline(cin,str) && str!="0")
////	{
////		if(str[0]=='1')
////		{
////			/*for ( iter=a1.begin() ; iter != a1.end(); iter++ )
////			{
////				cout<<(*iter).first<<" "<<(*iter).second.size()<<endl;
////			}*/
////			str="",arr="";
////			///it=a1.begin();
////			continue;
////		}
////		if((int)str[0]<=90 && (int)str[0]>=65)
////			arr=str;
////		else
////		{
////			a1[arr][i]=str;
////		}
////	}
////	return 0;
////}	
//#include<iostream>
//#include<map>
//#include<string>
//#include<set>
//using namespace std;
//
//int main()
//{
//	set<int> set1_1,set1_2;
//	set1_1.insert(1);
//	set1_2.insert(3);
//	set< set<int> > a1;
//	a1.insert(set1_1);
//	a1.insert(set1_2);
//	set<int>::iterator it ,iter;
//	string str,arr;
//	set<string>myset;
//	int i=0; 
//	while(getline(cin,str) && str!="0")
//	{
//		if(str[0]=='1')
//		{
//			for ( iter=a1.begin() ; iter!=a1.end(); iter++ )
//			{
//				for ( it=*iter.begin() ; it != *iter.end(); iter++ )
//					cout<<*(*it)<<" "<<endl;
//			}
//			str="",arr="";
//			//it=a1.begin();
//			continue;
//		}
//		if((int)str[0]<=90 && (int)str[0]>=65)
//			arr=str;
//		else
//		{
//			a1.insert(set1_1);
//		}
//	}
//	return 0;
//}	