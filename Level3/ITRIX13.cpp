//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//#include<cstdio>
//#include<string>
//using namespace std;
//
//int sigfigs (string value)
//{
//    int counter = 0;
//	double power=0;
//	bool flag=false;
//	for (int i = 0; i < value.size(); i++)
//	{
//		if(flag)
//		{
//			counter*=10;
//			counter+=value[i]-'0';
//		}
//		if(value[i]=='.'){
//			flag=true;
//			power=i+1;
//		}
//	}
//	if(!flag)
//		return 1;
//	power=value.size()-power;
//	counter=pow(10,power)/counter;
//    return counter;
//}
//int main()
//{
//	int test;
//	string val;
//	cin>>test;
//	while (test--)
//	{
//		cin>>val;
//		cout<<sigfigs(val)<<endl;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<utility>
#include<cmath>
#include<vector>
#include<map>
#include<cstdio>
#include<string>
using namespace std;

bool sorting (pair<string,int[3]>pair1,pair<string,int[3]>pair2)
{
	//return( (pair1.second[0]>pair2.second[0] ) || ((pair1.second[0]==pair2.second[0] )&&(pair1.second[1]>pair2.second[1] )  )|| ((pair1.second[0]==pair2.second[0] )&&(pair1.second[1]>pair2.second[1] )&&(pair1.second[2]<pair2.second[2] )));
		return(pair1.second[0]>pair2.second[0] );
		return ((pair1.second[0]==pair2.second[0] )&&(pair1.second[1]>pair2.second[1] )  );
		return ((pair1.second[0]==pair2.second[0] )&&(pair1.second[1]>pair2.second[1] )&&(pair1.second[2]<pair2.second[2] ));
}
int main()
{
	int n;
	string val;
	pair<string,int[3]>mypair[100002];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>mypair[i].first>>mypair[i].second[0]>>mypair[i].second[1]>>mypair[i].second[2];
	}
	sort(mypair,mypair+n,sorting);
	for (int i = 0; i < n; i++)
	{
		cout<<mypair[i].first<<endl;
	}
	return 0;
}