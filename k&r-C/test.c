 #include<stdio.h>
 int main()
{
long nc,nl;
nc=0;
nl=0;
while((nc=getchar())!=EOF)
{
++nc;
if((nc=getchar())=='\n')
nl++;
}
printf("%ld",nl);
}
