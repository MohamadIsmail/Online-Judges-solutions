#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

bool flag;
int arr[31],DP[31][31];
set<int> myset;
set<int>::iterator it;

bool sequence(int Index , int price , int end ,int counter)
{
	if(Index==end)
	{
		if(counter>1)
		    myset.insert(price);
		if(price==arr[end])
			return false;
		else
			return true;
	}
	bool takeItem, skipItem;
	takeItem = sequence(Index + 1 , price+arr[Index] , end, counter+1);
	skipItem = sequence(Index + 1 , price , end , counter);
	if(!takeItem)
		return takeItem;
	else if(!skipItem)
		return skipItem;
	else
		return true;
}

int main()
{

	int n,case_num=0,i;
	while(cin>>n)
	{
		flag=true;
		for(i=0; i<n; i++)
		    cin>>arr[i];
		for(i=0; i<n-1; i++)
		{
		    if(arr[i]>=arr[i+1])
		    {
		        flag=false;
		        break;
		    }
		}
		flag=sequence(0,0,n-1,0);
		if(flag)
		{
            for(it=myset.begin(),i=1; it!=myset.end() ,i<n-1; it++ ,i++)
            {
                if(arr[i] < *it)
                    it--;
                if(*it < arr[i])
                    i--;
                if(*it==arr[i])
                {
                    flag=false;
                    break;
                }
            }
        }
		cout<<"Case #"<<++case_num<<":";
		for(int i=0; i<n; i++)
		    cout<<" "<<arr[i];
		if(flag)
		    cout<<"\nThis is an A-sequence.\n";
		else
		    cout<<"\nThis is not an A-sequence.\n";
		myset.clear();
	}
	return 0;
}
