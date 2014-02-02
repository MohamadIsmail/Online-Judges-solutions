//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<utility>
//#include<cstring>
//using namespace std;
//
//
//int main()
//{
//	int test , length,counter,case_num=0;
//	char arr[100];
//	bool cover[100];
//	cin>>test;
//	while(test--)
//	{
//		cin>>length;
//		counter=0;
//		memset(cover,false,length);
//		for(int k=0; k<length; k++)
//			cin>>arr[k];
//		for(int k=0; k<length; k++)
//		{
//			if(cover[k] || arr[k]=='#')
//				continue;
//			for(int i=k; i<length && i<=k+2; i++)
//				cover[i]=true;
//			counter++;
//		}
//		cout<<"Case "<<++case_num<<": "<<counter<<endl;
//	}
//	return 0;
//}