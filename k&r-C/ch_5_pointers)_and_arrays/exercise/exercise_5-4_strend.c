//
// Created by rahul on 11/7/19.
//

int strend(char *s,char *t)
{
    char *bs=s; //remeber  address of string
    char *bt=t;
    for(;*s;s++)
        ;
    for(;*t;t++)
        ;
    for(;*s==*t;t--,s--)
        if(t==bt || s==bs )
            break;  //begaining of string
            if(*s==*t && t==bt && *s!=
            '\0')
                return 1;
            else
                return 0;
}