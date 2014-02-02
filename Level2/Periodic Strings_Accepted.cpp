//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string arr,s;
//	int number,h,g;
//	cin>>number;
//	cin.ignore();
//	while(number--)
//	{
//		cin.ignore();
//		s="";
//		bool period=false;
//		getline(cin,arr);
//		for(int l=0; l<arr.size(); l++)
//		{
//			h=0;
//			period=true;
//			s+=arr[l];		
//			for(int m=0; m<s.size(); m++)
//			{
//				g=0;
//				for(int j=m; j<arr.size(); j+=s.size())
//				{
//					if(arr[j]==s[m])
//					{
//						g++;
//						if(m==0)
//							h++;
//					}
//					else
//					{
//						period=false;
//						break;
//					}
//				}
//				if(h!=g)
//					period=false;
//				if(period==false)break;
//			}
//			if(period==true)break;
//		}
//		if(period==true)
//			cout<<s.size()<<endl;
//		else
//			cout<<arr.size()<<endl;
//		if(number)
//			cout<<endl;
//	}
//	return 0;
//}