/** Big Number division *********************/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MAX 1000
//int call_div(char *number,long div,char *result){
//int len=strlen(number);
//int now;
//long extra;
//char Res[MAX];
//for(now=0,extra=0;now<len;now++){
//extra=extra*10 + (number[now]-'0');
//Res[now]=extra / div +'0';
//extra%=div;
//}
//Res[now]='\0';
//for(now=0;Res[now]=='0';now++);
//strcpy(result, &Res[now]);
//if(strlen(result)==0)
//strcpy(result, "0");
//return extra;
//}
//int main(){
//char fir[MAX],res[MAX];
//long sec,remainder;
//while(scanf("%s%ld",&fir,&sec)==2){
//if(sec==0) printf("Divide by 0 error\n");
//else{
//remainder=call_div(fir,sec,res);
//int len=strlen(res);
//for(int i=0;i<len;i++) printf("%c",res[i]);
//printf("\t%ld",remainder);
//printf("\n");
//}
//}
//return 0;
//}


//****** Big Number Sqrt ************************//
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000
*/
//int call_minus(char *large, char *small, char *result){
//char L[MAX], S[MAX];
//int l,s,now,hold,diff;
//l=strlen(large);
//s=strlen(small);
//if(l<s)
//return 0;
//if(l==s){
//if(strcmp(large, small)<0)
//return 0;
//}
//reverse(large,L);
//reverse(small,S);
//for(;s<l;s++)
//S[s]='0';
//S[s]='\0';
//for(now=0,hold=0;now<l;now++){
//diff=L[now]-(S[now]+hold);
//if(diff<0){
//hold=1;
//result[now]=10+diff+'0';
//}
//else{
//result[now]=diff+'0';
//hold=0;
//}
//}
//for(now=l-1;now>0;now--){
//if(result[now]!='0')
//break;
//}
//result[now+1]='\0';
//reverse(result,L);
//strcpy(result,L);
//return 1;
//}
/****************************************************************//*
void call_sqrt(char *number,char *result,char *extra){
int num,start,e,mul,l,r=0,len;
char left[MAX],after[MAX];
char who[5],temp[MAX],two[5];
len=strlen(number);
if(len%2==0){
num=10*(number[0]-'0') + number[1]-'0';
start=2;
}
else{
num=number[0]-'0';
start=1;
}
mul=(int) sqrt(num);
result[0]=mul+'0';
result[1]='\0';
if(num-mul*mul ==0)
extra[0]='\0';
else
sprintf(extra,"%d",num-mul*mul);
for(;start<len;start+=2){
e=strlen(extra);
extra[e]=number[start];
extra[e+1]=number[start+1];
extra[e+2]='\0';
two[0]='2';
two[1]='\0';
call_mult(result,two,left);
l=strlen(left);
for(mul=9;mul>=0;mul--){
who[0]=mul+'0';
who[1]='\0';
strcat(left,who);
call_mult(left,who,after);
if(call_minus(extra,after,temp)==1){
result[++r]=mul+'0';
result[r+1]='\0';
strcpy(extra,temp);
break;
}
else
left[l]='\0';
}
}
result[++r]='\0';
}*/
///******************************************************************
//int main(){
//char fir[MAX],ex[MAX],res[MAX];
//while(scanf("%s",&fir)==1){
//call_sqrt(fir,res,ex);
//int len=strlen(res);
//for(int i=0;i<len;i++) printf("%c",res[i]);
//printf("\n");
//}
//return 0;
//}