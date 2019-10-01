#include<stdio.h>
#include<stdlib.h>
double *p=NULL;
int n;
double *insertion(double *p)
{
  if(p==NULL)
  printf("DA is empty");
   else
   {
  ++n;
     double *nn;
     nn=(double *)calloc(n,sizeof(double));
     double *temp;
     temp=nn;
     for(int i=0;i<n-1;i++)
     {
       *(nn++)=*(p+i);
     }
     printf("enter the value to be inserted at last");
     int val;
     scanf("%d",&val);
     *(nn)=val;
     return temp;
   }
}

int main()
{
  int i;
  printf("the size of da ");
  scanf("%d",&n);
  p=calloc(n,sizeof(double)); //make double array of 10 element
printf("Enter n values ");
  for(i=0;i<n;i++)
  scanf("%lf",(p+i));
  printf("\n Entered values are :");
  for(i=0;i<n;i++)
  printf("%lf\n",*(p+i));
  int option;
  printf("ENter the option for operation \n");
  printf("enter 1 for insertion at end\n");
  printf("enter 2 for exit");
      printf("enter an option ");
      scanf("%d",&option);
  do {
    switch(option)
    {
      case 1:
        p=insertion(p);
        break;
        case 2:
        break;
    }
    printf("enter an option ");
    scanf("%d",&option);
  } while(option!=2);
  for(i=0;i<n;i++)
  printf("%f\n",*(p+i));
}
