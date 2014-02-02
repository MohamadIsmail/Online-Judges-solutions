#include<iostream>
#include<string>
using namespace std;
int main()
{
	string arr,Input="1234567890-=\\WERTYUIOP[]SDFGHJKL;'XCVBNM,./",Output="`1234567890-=QWERTYUIOP[ASDFGHJKL;ZXCVBNM,.";
	while(getline(cin,arr)) 
	{
		for(int i=0; i<arr.size(); i++)
		{
			bool found=false;
			for(int j=0; j<Input.size(); j++)
			{
				if(arr[i]==Input[j])
				{
					found=true;
					cout<<Output[j];
					break;
				}
			}
			if(found==false)
				cout<<arr[i];
		}
		cout<<endl;
	}
}