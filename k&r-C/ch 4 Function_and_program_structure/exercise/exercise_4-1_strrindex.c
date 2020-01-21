//
// Created by Rahul on 6/26/2019.
//

int strrindex(int s[],int t[])
{
    int i,j,k;
    pos=-1;
    for(i=0;s[i]!='\0';i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
            pos = i;
    }
    return i;
}