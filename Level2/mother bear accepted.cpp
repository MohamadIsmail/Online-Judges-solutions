//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string a,b;
//	int x,start,end,y;
//	while((getline(cin,a))&&(a!="DONE"))
//	{
//		bool palindrome=true;
//		b="";
//		for(int i=0; i<a.size(); i++)
//		{
//			x=(int)a[i];
//			if((x>=97)&&(x<=122))
//				b+=a[i];
//			if((x>=65)&&(x<=90))
//			{
//				x+=32;
//				b+=(char)x;
//			}
//		}
//		start=0,end=b.size()-1;
//		for(int i=0; i<b.size()/2; i++)
//		{
//			x=(int)b[start],y=(int)b[end];
//			if(b[start]!=b[end])
//			{
//				palindrome=false;
//				break;
//			}
//			start++,end--;
//		}
//		if(palindrome==true)
//			cout<<"You won't be eaten!"<<endl;
//		else
//			cout<<"Uh oh.."<<endl;
//	}
//	return 0;
//}