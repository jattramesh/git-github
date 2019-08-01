//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
int getarray(char arr[],int maxsize)
{
    int x;
    int i=0;
    while((x=getchar())!='\n' && i<maxsize)
    {
        arr[i]=x;
        i++;

    }
arr[i]='\0';


}
int main()
{
    char str[200],pat[20],new_str[400],rep_pat[100];
    int i=0,j=0,k,n=0,copy_loop=0,rep_index=0;
    printf("enter the string : ");
    getarray(str,200);
    printf("\n enter the pattern to be replaced");
    getarray(pat,20);
    printf("\n enter the repacing pattern:");
    getarray(rep_pat,100);
    while(str[i]!='\0')
    {
        j=0;
        k=i;
        while(str[k]==pat[j] && pat[j]!='\0')
        {
            k++;
            j++;
        }
        if(pat[j]=='\0')
        {
            copy_loop=k;
            while(rep_pat[rep_index]!='\0')
            {
                new_str[n]=rep_pat[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n]=str[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_str[n]='\0';
    printf("\n the new string is ");
    puts(new_str);
    return 0;
}