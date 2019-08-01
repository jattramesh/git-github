//
// Created by rahul on 30/7/19.
//
#include <stdio.h>
int main()
{
    char text[100],str[20],ins_text[100];
    int i=0,j=0,k=0,pos;
    printf("enter the main string \n");
    int c;
    int in=0;
    while((c=getchar())!='\n')
    {
      text[in++]=c;
    }
    text[in]='\0';
    puts(text);
in=0;
    printf("enter the string to be inserted\n");
    while((c=getchar())!='\n')
    {
        str[in++]=c;
    }
    str[in]='\0';
puts(str);
    printf("Enter the poxition at which string to be inserted");
    scanf("%d",&pos);
    while(text[i]!='\0')
    {
        if(i==pos)
        {
            while(str[k]!='\0')
            {

                ins_text[j]=str[k];
                j++;
                k++;
            }
            if(str[k]=='\0')
                ins_text[j++]=text[pos];

        }
        else
        {
            ins_text[j]=text[i];
            j++;
        }
        i++;
    }
    ins_text[j]='\0';
    printf("new string is \n");
    puts(ins_text);
    return 0;
}