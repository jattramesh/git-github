#include<iostream>
#include<stdio.h>
using namespace std;
class q
{
  struct list
  {
    int data;
    struct list *next;
  };
  typedef struct list node;
  node *front=NULL;
  node *rear=NULL;
public:
  void insert();
  int del();
  void print();
};
void q::insert()
{
  node* traverse;
if(front==NULL)
{
  node* first;
  first=new node;
  cout<<"Enter the data value in quene \n";
  cin>>first->data;
  front=first;
  rear=first;
  first->next=NULL;
  traverse=rear;
}
else
{
  node* others;
  others=new node;
  while(traverse->next!=NULL)
  traverse=traverse->next;
  cout<<"Enter the value to inserted in quene \n";
  cin>>others->data;
  traverse->next=others;
  others->next=NULL;
  rear=others;
}
}
int q::del()
{
  if(front==NULL)
  return printf("underflow");
   else if(rear==front)
  {
      int val=front->data;
    rear=NULL;
    front=NULL;
    return val;
  }
  else
  {
    node *fr;
    fr=front;
    int val;
    val=front->data;
    front=front->next;
    delete fr;
    return val;
  }
}
void q::print()
{
  node *dis;
  dis=front;
  while(dis!=NULL)
  {
    cout<<dis->data;
    dis=dis->next;
  }
}
int main()
{
q q1;
q1.insert();
q1.insert();
q1.insert();
q1.print();
q1.insert();
q1.print();
cout<<"delete";
q1.del();
q1.print();
q1.insert();
q1.del();
cout<<"delete";
q1.del();
q1.print();
q1.insert();
q1.print();
}
