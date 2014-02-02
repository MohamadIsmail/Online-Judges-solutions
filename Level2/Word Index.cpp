#include<iostream>
#include<string>
using namespace std;

// secret
const string secret = "*oo*";
string

void solveTheSeceret(int index, string str)
{
	if(index == secret.size())
	{
		cout << str << endl;
		return;
	}
	if(secret[index] == '*')
	{
		for(char i = 'a'; i <= 'z'; ++i)
		{
			string temp = str + i;
			solveTheSeceret(index + 1, temp);
		}
	}
	else
	{
		string temp = str + secret[index];
		solveTheSeceret(index + 1, temp);
	}
}

int main()
{
    for(int )
	solveTheSeceret(0, "");
	return 0;
}
