#include <stdio.h>
void swap(int a[], int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void  bubble(int a[], int high)
{
    int i,j;
    for(int i=0;i<high-1;i++)
        for(int j=0;j<high-i-1;j++)
            if(a[j]>a[j+1]) {
                swap(a, j, j + 1);
                for (int k = 0; k < 5; k++)
                    printf("%d\t", a[k]);
                printf("\n");
            }
}
int main()
{
    int a[]={5,4,3,2,1};
    bubble(a,5);
    for(int i=0;i<5;i++)
        printf("%d",a[i]);

}

