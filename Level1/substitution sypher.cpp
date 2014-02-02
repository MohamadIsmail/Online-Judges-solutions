#include<iostream>
#include<string>
using namespace std;

int main()
{
	string t1,t2,s,str;
	int n,i;
    cin>>n;
	cin.ignore();
	getline(cin,s);
    for(int m=1;m<=n;m++)
    {
		getline(cin,t1);
		getline(cin,t2);
		cout<<t2<<endl;
		cout<<t1<<endl;
		while((getline(cin,str))&&(str.size()!=0))
		{
			for(int j=0; j< str.size(); j++)
			{
				for( i=0; i< t1.size(); i++)
				{
					if(t1[i]==str[j])
					{
						cout<<t2[i];
						break;
					}
					if(i==(t1.size())-1)
						cout<<str[j];
				}
			}
			cout<<endl;
		}
		if(m!=n)
			cout<<endl;
	}
	return 0;
}