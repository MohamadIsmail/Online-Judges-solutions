//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string arr[50];
//	int T,n;
//	cin>>T;
//	for(int i=1; i<=T; i++)
//	{
//		cin>>n;
//		cin.ignore();
//		for(int l=0; l<n; l++)
//			getline(cin,arr[l]);
//		cout<<"Case "<<i<<":\n";
//		for(int j=0; j<n; j++)
//		{
//			for(int l=0; l<arr[j].size(); l++)
//			{
//				if((arr[j][l]==' ')&&(l>0))
//				{
//					if(arr[j][l-1]==' ')
//						continue;
//				}
//				cout<<arr[j][l];
//			}
//			cout<<endl;
//		}
//		if(i!=T)
//			cout<<endl;
//	}
//	return 0;
//}