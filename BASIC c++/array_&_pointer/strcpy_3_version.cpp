//
// Created by Rahul on 6/14/2019.
//
void strcpy(char s1[],char s2[])
{
    int i;
    for(i=0;s2[i]!='\n';++i)
        s1[i]=s2[i];
    s2='\0';
}
void strcpy(char *s1,char *s2)
{
    int i=0;
    for(;*s2!='\0';++s2,++s1)
        *s1=*s2;
}
void strcpy(char *s1,char *s2)
{
    while((*s1++=*s2++)!='\0');
}

