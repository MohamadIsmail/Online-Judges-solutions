//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//int main ()
//{
//	//freopen("1.txt","rt",stdin);
//	int n,total,amount,credits[2002];
//	cin>>n;
//	cin.ignore();
//	string arr,t;
//	for(int e=0 ; e<n; e++)
//	{
//		cin>>total>>amount;
//		for (int i = 0; i < amount; i++)
//		{
//			cin>>credits[i];
//		}
//		int x,y;
//		for (int i = 0; i < amount; i++)
//		{
//			for (int j = i+1; j < amount; j++)
//			{
//				if(credits[i]+credits[j]==total)
//				{
//					x=i,y=j;
//					break;
//				}
//			}
//		}
//		cout<<"Case #"<<e+1<<": "<<x+1<<" "<<y+1<<endl;
//	}
//	return 0;
//}