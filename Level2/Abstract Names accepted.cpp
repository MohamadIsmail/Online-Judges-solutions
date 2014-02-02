//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string arr,s;
//	int number;
//	bool p;
//	cin>>number;
//	cin.ignore();
//	for(int i=0 ; i<number ; i++)
//	{
//		getline(cin,arr);
//		getline(cin,s);
//		p=true; 
//		if(arr.size()!=s.size())
//			cout<<"No"<<endl;
//		else
//		{
//			for(int l=0; l<arr.size(); l++)
//			{
//				if((arr[l]!='a')&&(arr[l]!='e')&&(arr[l]!='i')&&(arr[l]!='o')&&(arr[l]!='u'))
//				{
//					if(s[l]!=arr[l])
//					{
//						p=false;
//						break;
//					}
//				}
//				else
//				{
//					if((s[l]!='a')&&(s[l]!='e')&&(s[l]!='i')&&(s[l]!='o')&&(s[l]!='u'))
//					{
//						p=false;
//						break;
//					}
//				}
//			}
//			if(p==true)
//				cout<<"Yes"<<endl;
//			else
//				cout<<"No"<<endl;
//		}
//	}
//	return 0;
//}