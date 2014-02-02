//#include<stdio.h>
//#include<string.h>
//char f[10000];
//char factorial[1010][10000];
//
//void multiply(int k)
//{
//	int cin,sum,i;
//	int len = strlen(f);
//	cin=0;
//	i=0;
//	while(i<len){
//		sum=cin+(f[i] - '0') * k;
//		f[i] = (sum % 10) + '0';
//		i++;
//		cin = sum/10;
//	}
//	while(cin>0){
//		f[i++] = (cin%10) + '0';
//		cin/=10;
//	}
//	f[i]='\0';
//	for(int j=0;j<i;j++)
//		factorial[k][j]=f[j];
//	factorial[k][i]='\0';
//}
//void fac(){
//	int k;
//	strcpy(f,"1");
//	for(k=2;k<=1000;k++)
//		multiply(k);
//}
//void print(int n){
//	int i;
//	int len = strlen(factorial[n]);
//	printf("%d!\n",n);
//	for(i=len-1;i>=0;i--){
//		printf("%c",factorial[n][i]);
//	}
//	printf("\n");
//}
//int main(){
//	int n;
//	factorial[0][0]='1';
//	factorial[1][0]='1';
//	fac();
//	while(scanf("%d",&n)==1){
//		print(n);
//	}
//	return 0;
//}
////////////////////GCD//////////////////
//
//int gcd(int a, int b)
//{
//	int r=1;
//	if(a>b)
//	{
//		while ( r!=0)
//		{
//			r=a%b;
//			a=b;
//			b=r;
//		}
//		return a;
//	}
//	else if ( b>a)
//	{
//		while (r!=0)
//		{
//			r=b%a;
//			b=a;
//			a=r;
//		}
//		return b;
//	}
//	else if ( a==b)
//		return a;
//}
/////////////////////////LCM//////////////////////////////
///*int lcm(int a, int b)
//{
//return a*b/gcd(a,b);
//}
//bool isprime(int a)
//{
//if(a==2) return true;
//else
//{
//for(int i=2;i<a/2+1;++i)
//if(a%i==0) return false;
//if(i==a/2) return true;}
//} 
//}
///
//#include<stdio.h>
//#include<math.h>
//*******************************************************************//*
//double count_digit(long a){
//double sum;
//long double i;
//if(a==0) return 1;
//else{
//sum=0;
//for(i=1;i<=a;i++){
//sum+=log10(i);
//}
//return floor(sum)+1;
//}
//}
//*******************************************************************//*
//int main(){
//double sum;
//long n;
//while(scanf("%ld",&n)==1){
//sum=count_digit(n);
//printf("%.0lf\n",sum);
//}
//return 0;
//}*/