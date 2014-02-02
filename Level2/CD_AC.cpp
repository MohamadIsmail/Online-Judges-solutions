#include<iostream>
#include<string>
#include<vector>
using namespace std;

int tracks[20],max_value,track,value,counter;
vector <int> myvector,result;

int solve(int index, int price )
{
	if(index == track)
	{
		if(price <= max_value)
		{
			if(price > counter)
			{
				counter = price;
			    result = myvector;
			}
			return price;
		}
		else
		{
			return -10000000;
		}
	}
	int takeItem, skipItem;

	myvector.push_back(tracks[index]);
	takeItem = solve(index + 1 , price + tracks[index]);
	myvector.pop_back();
	skipItem = solve(index + 1 , price);

	return max(takeItem, skipItem);

}

void func()
{
    for(int i=0; i<result.size() ; i++)
        cout<<result[i]<<" ";
    cout<<"sum:"<<value<<endl;
}

int main()
{
    while(cin>>max_value>>track)
    {
        counter=-1000;
        result.clear();
        myvector.clear();
        for(int i=0; i<track; i++)
            cin>>tracks[i];
        value=solve(0, 0);
        func();
    }
	return 0;
}
