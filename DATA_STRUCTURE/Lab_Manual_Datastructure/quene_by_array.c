#include<stdio.h>
#define MAX 10
int q[MAX];
int front=-1;
int rear=-1;
void insert(int n)
{
  if(rear==MAX-1)
  printf("quene overflow\n");
else if(front==-1)
{
 (q[++front]=n);
 rear=front;
}
 else
 {
   q[++rear]=n;
 }
}
int  del()
{
  if(rear==-1)
  {
front=-1;
  return   printf("Quene underflow\n");
  }
  else
  {
    return (q[front++]);
  }
}
void print()
{
  int t;
  t=rear;
  for(int i=front;i<=rear;i++)
  printf("%d\t",q[i]);
  printf("\n");
}
int main()
{
  int c;
  insert(10);
  insert(19);
  insert(21);
  insert(22);
    print();
  c=del();
  print();
  c=del();
  print();
  c=del();
  print();
  insert(10);
  insert(19);
  insert(21);
  insert(22);
  insert(10);
  insert(19);
  insert(21);
  insert(22);
  print();
  insert(10);
  insert(10);
  insert(19);
  insert(21);
  insert(100);
  print();
    c=del();
      c=del();
        c=del();
          c=del();
            c=del();
              c=del();
                c=del();
                  c=del();
                    c=del();
                      c=del();
                      print();
                      c=del();
                        c=del();
                          c=del();
}
