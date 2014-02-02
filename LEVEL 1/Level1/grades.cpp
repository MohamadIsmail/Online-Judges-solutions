#include<iostream>
using namespace std;
int main()
{
	int number,grade;
	char c;
	do
	{
		int A=0,B=0,C=0,P=0,F=0;
		cout<<"Enter the number of students:\n";
		cin>>number;
		if(number>0)
		{
			for(int i=1;i<=number;i++)
			{
				cout<<"Enter grade "<<i<<": ";
				cin>>grade;
				cout<<endl;
			   if(grade>=85)
			   {
			      A++;
			   }
			   else if(grade>=75)
			   {
			      B++;
			   }
               else if(grade>=65)
			   {
			      C++;
			   }
               else if(grade>=50)
			   {
			      P++;
			   }
			   else
			   {
				  F++;
			   }
			}
			    cout<<"A: "<<A<<endl;
			    cout<<"B: "<<B<<endl;
			    cout<<"C: "<<C<<endl;
			    cout<<"P: "<<P<<endl;
			    cout<<"F: "<<F<<endl;
		}
		else
		{
			break;
		}
		cout<<"Do another(y/n): ";
		cin>>c;
	}while(c=='y');
	return 0;
}