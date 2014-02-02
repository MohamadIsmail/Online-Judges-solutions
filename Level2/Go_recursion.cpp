// #include<iostream>
// #include<cmath>
// using namespace std;
//
// int arr[6],Ticket;
//
// int Banknote(int Index ,int price)
// {
// 	if(Index==6)
// 	{
// 		if(price==Ticket)
// 			return 1;
// 		else
// 			return 0;
// 	}
// 	int takeItem, skipItem;
// 	takeItem = Banknote(Index + 1, price + arr[Index]);
// 	skipItem = Banknote(Index + 1, price);
// 	if(takeItem==1)
// 		return takeItem;
// 	else if(skipItem==1)
// 		return skipItem;
// 	else
// 		return 0;
// }
//
// int main()
// {
// 	while(cin>>Ticket)
// 	{
// 		for(int i=0; i<6; i++)
// 			cin>>arr[i];
// 		if(Banknote(0,0)==1)
// 			cout<<"Possible\n";
// 		else
// 			cout<<"Impossible\n";
// 	}
// 	return 0;
// }
