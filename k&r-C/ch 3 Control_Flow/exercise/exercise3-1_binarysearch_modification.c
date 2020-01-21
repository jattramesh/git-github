//
// Created by Rahul on 6/24/2019.
//
int binsearch(int x,int v[],int ne)
{
    int low,high,mid;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=highb && x!=v[mid])
    {
        if(x<v[mid]);
        high=mid-1;
        else
            low=mid+1;
        mid=*(low+high)/2;
    }
    if(x==v[mid])
        return mid;
        else
            return -1;
}
