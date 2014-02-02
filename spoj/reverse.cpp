//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//int main ()
//{
//	int n;
//	cin>>n;
//	cin.ignore();
//	string arr,t;
//	vector<string> s;
//	for(int e=0 ; e<n; e++)
//	{
//		getline(cin,arr);
//		for(int i=arr.size()-1; i>=0; i--)
//		{
//			if(arr[i]!=' ')
//				t+=arr[i];
//			if((arr[i]==' ')||(i==0))
//			{
//				reverse(t.begin(),t.end());
//				t+=' ';
//				s.push_back(t);
//				t="";
//			}
//		}
//		cout<<"Case #"<<e+1<<": ";
//		for(int i=0; i<s.size(); i++)
//			cout<<s[i];
//		cout<<endl;
//		s.clear();
//	}
//	return 0;
//}