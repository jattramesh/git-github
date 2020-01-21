//
// Created by Rahul on 6/14/2019.
//
int strlen(char *str)
{
    char *p=str;
    for(p=str;*p!='\0';++p);
    return(p-str);
}
