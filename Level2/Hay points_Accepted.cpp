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
//	map <string,int> my;
//	map<string,int>::iterator it;
//	string str,arr,vec;
//	int m,n,x,sum;
//	cin>>m>>n;
//	for(int i=0; i<m; i++)
//	{
//		cin>>str>>x;
//		my[str]=x;
//	}
//	cin.ignore();
//	for(int i=0; i<n; i++)
//	{
//		sum=0;
//		while((getline(cin,arr))&&(arr!="."))
//		{
//			for(int j=0; j<arr.size(); j++)
//			{
//				if(arr[j]!=' ')vec+=arr[j];
//				if((arr[j]==' ')||(j==arr.size()-1))
//				{
//					it=my.find(vec);
//					if(it!=my.end())sum+=my[vec];
//					vec="";
//				}
//			}
//		}
//		cout<<sum<<endl;
//	}
//	return 0;
//}