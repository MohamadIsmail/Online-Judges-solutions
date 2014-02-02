//#include<iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//#include<cstdlib>
//#include<climits>
//using namespace std;
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
//
//int main()
//{
//	//freopen("1.txt","rt",stdin);
//	map<char,string>myalpha;
//	myalpha['a']="2";myalpha['b']="22";myalpha['c']="222";myalpha['d']="3";myalpha['e']="33";myalpha['f']="333";myalpha['g']="4";myalpha['h']="44";
//	myalpha['i']="444";myalpha['j']="5";myalpha['k']="55";myalpha['l']="555";myalpha['m']="6";
//	myalpha['n']="66";myalpha['o']="666";myalpha['p']="7";myalpha['q']="77";myalpha['r']="777";myalpha['s']="7777";myalpha['t']="8";myalpha['u']="88";myalpha['v']="888";
//	myalpha['w']="9";myalpha['x']="99";myalpha['y']="999";myalpha['z']="9999";myalpha[' ']="0";
//	int test,num=0;
//	string str,arr;
//	scanf("%d",&test);
//	cin.ignore();
//	while (test--)
//	{
//		arr="";
//		getline(cin,str);
//		for (int i = 0; i < str.size(); i++)
//		{
//			if(i){
//				if(myalpha[str[i]].size()<myalpha[str[i-1]].size()){
//					string vec=myalpha[str[i-1]].substr(0,myalpha[str[i]].size());
//					if(vec==myalpha[str[i]])
//						arr+=' ';
//				}
//				else
//				{
//					string vec=myalpha[str[i]].substr(0,myalpha[str[i-1]].size());
//					if(vec==myalpha[str[i-1]])
//						arr+=' ';
//				}
//			}
//			arr+=myalpha[str[i]];
//
//		}
//		cout<<"Case #"<<++num<<": "<<arr<<endl;
//	}
//	return 0;
//}