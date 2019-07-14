int strllen(char *s)
{int n=0;
    while(*s!='\0') {
        s++;
        ++n;
    }
    return n;
}
void revers(char *s)
{
 int c;
 char *t;
 for(t=s+(strllen(s)-1);s<t;s++,t--)
 {
     c=*s;
     *s=*t;
     *t=c;
 }
}
void itoa(int n,char *s)
{
    int sign;
    char *t=s; //save pointer to s
    if((sign=n)<0)
        n=-n;   //make n positive
    do{  /* generate digit in reverse order */
        *s = n%10+'0';
        s++;
    }
    while((n=n/10)>0);
    if(sign<0)
        *s++='-';
    *s='\0';
    revers(t);
}