//
// Created by Rahul on 6/15/2019.
//error to be solve on bash shell
#include <iostream>
#include <cstring>
using namespace std;
#define MAXL 200  //maximim length of line
char line[500]; //for a  line of text
int main(int argc,char *argv[])
{
  if(argc!=2)
  {
      cerr<<"caLL: search pattern [<text.dat]"<<endl;
      return  1;
  }
  int lineNr=0; //as long as line exit
  while(cin.getline(line,MAXL))
  {
      ++lineNr;
      if(strstr(line,argv[1])!=NULL)
      {
          cout.width(3);
          cout<<lineNr<<":"<<line<<endl;
      }
  }
  return 0;
}


