/*Convert an integer number into  binary number

unsigned int creatnum(int *num)
{
int i;
unsigned int a=0;
for(i=0;i<32;i++)
{ a= a|num[i];
if(i!=31)
a <<= 1;
}
return a;
}
*/