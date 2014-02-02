#include<iostream>
#include<string>
#include<vector>
using namespace std;

int strings,rules;
vector <string> myvector,vec;

void solveTheSeceret(string arr , int index, string str,int num)
{
	if(index == arr.size())
	{
		cout << str << endl;
		return;
	}
	if(arr[index] == '0')
	{
		for(char i = '0'; i <= '9'; ++i)
		{
			string temp = str + i;
			solveTheSeceret(arr, index + 1, temp, num);
		}
	}
	else
	{
		string temp = str + myvector[num];
		solveTheSeceret(arr, index + 1, temp, num);
	}
}

int main()
{
    string str;
    while(cin>>strings)
    {
        for(int i=0; i<strings; i++)
        {
            cin>>str;
            myvector.push_back(str);
        }
        cin>>rules;
        for(int i=0; i<rules; i++)
        {
            cin>>str;
            vec.push_back(str);
        }
        cout<<"--\n";
        for(int i=0; i<rules; i++)
        {
            for(int j=0; j<strings; j++)
                solveTheSeceret(vec[i], 0, "",j);
        }
        vec.clear();
        myvector.clear();
    }
	return 0;
}
