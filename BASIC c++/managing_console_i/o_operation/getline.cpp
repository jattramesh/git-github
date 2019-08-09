//
// Created by rahul on 9/8/19.
//
#include <iostream>
using namespace std;
int main()
{
    int size=20;
    char city[20];
  cout<<"enter the city name"<<endl;
  cin>>city;
  cout<<"city name : "<<city<<endl;
  cout<<"2"<<endl;
  cout<<"enter city name ";
  cin.getline(city,size);
  cout<<"city "<<city<<endl;  cout<<"enter city name ";
  cin.getline(city,size);
  cout<<"city "<<city<<endl;
  cout<<"enter city name ";
  cin.getline(city,size);
  cout<<"new time name :"<<city<<endl;
  return 0;
}