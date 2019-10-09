//
// Created by rahul on 12/9/19.
//

#ifndef EXAMINATION_MANAGEMENT_PACKAGE_CLASS_STUDENT_H
#define EXAMINATION_MANAGEMENT_PACKAGE_CLASS_STUDENT_H

#include <stdio.h>
#include <cstring>
#include <iostream>
char string[30];
int regdstore[100];
char school_name[100];
using namespace std;
int getregdno;
#define getbig(ch) ((ch-'0' + '0' )>=97) ? (ch-'0'+'0'-32) : (ch)

void get_schoolname() {
    cout << "Enter the name of orgaisation for which this module will work ";
    int ch;
    int i = 0;
    while ((ch = getchar()) != '\n') {
        school_name[i] = getbig(ch);
        i++;
    }
    school_name[i] = '\0';
}
class Student_Detail{
    int long  Regdno;
    int clas;
    char section;
    char name[30];
    struct  dob
    {
        int day;
        int month;
        int year;
    }DOB;
    char fathername[30];
    char address[50];
    char streamcode[3];//SE-science,CO-commerce,AR-Arts
public:
    void Get_Detail();
void reg()
{
        ::getregdno=Regdno;
}
int getregd()
{
    int val;
    val=Regdno;
    return val;
}
char *getstream()
{
    char *p;
    p=streamcode;
    return p;
}
};
void Student_Detail::Get_Detail()
{
    static  int i=0;
    cout<<"Enter Registration Number :";
    cin>>::getregdno;
    Regdno=::getregdno;
    cout<<"Enter Student Name :";
    cin.getline(name,30);
    cin.getline(name,30);
    cout<<"Enter The Father's Name : ";
    cin.getline(fathername,30);
    cout<<"Enter The Class Of Student :";
    cin>>clas;
    cout<<"Enter The Stream Of Student :";\
    cin>>streamcode;
    cout<<"Enter The Section :";
    cin>>section;
    printf("Enter The DOB In dd/mm/yyyyy :");
    scanf("%d/%d/%d",&DOB.day,&DOB.month,&DOB.year);
    cout<<"Enter Student Address : ";
    cin.getline(address,50);
    cin.getline(address,50);
    regdstore[i]=Regdno;
    ++i;
}
class Result: public Student_Detail
{int regdstore[100];
    int sub1;
    char sub1name[20];
    int sub2;
    char sub2name[20];
    int sub3;
    char sub3name[20];
    int sub4;
    char sub4name[20];
    int sub5;
    char sub5name[20];
    int total;
    char grade;
    float aggregate;
    char division;
public:
    float calculate_percent();
    void file_management();
    void display_result();
    void individual_result(int );
    void addresult()
    {
        Get_Detail();
        calculate_percent();
    }

};
float Result::calculate_percent() {
        int regd;

        cout<<"Enter marks of student with Regdno."<<::getregdno<<endl;
        cout<<"1 Enter First Subject English Marks";
        cin>>sub1;
        cout<<"2 Enter Second Subject Maths Marks ";
        cin>>sub2;
        cout<<"3 Enter Third  Subject Chemistry Marks ";
        cin>>sub3;
        cout<<"4 Enter Fourth Subject Physics Marks ";
        cin>>sub4;
        cout<<"5 Enter Fifth Subject Computer Marks ";
        cin>>sub5;
        float result;
        result=(sub1+sub2+sub3+sub4+sub5)/5;
        return result;
    }
    void Result::individual_result(int regd) {

            cout<<school_name<<" PUBLIC SCHOOL"<<"\t\t\t\n";
            cout<<"Admno"<<":"<<getregd();
            cout<<"\n";
            cout<<"Stream"<<":"<<getstream();
            cout<<"\n-------------------------------------------------------------------\n";
            cout<<"\nSubject  "<<"\t\t\t"<<"MAX. MARKS "<<"\t\t\t"<<"MARKS OBTAINED\n"<<endl;
            cout<<"English  "<<"\t\t\t"<<"100        "<<"\t\t\t"<<sub1;
            cout<<"\nMaths    "<<"\t\t\t"<<"100        "<<"\t\t\t"<<sub2;
            cout<<"\nChemistry"<<"\t\t\t"<<"100        "<<"\t\t\t"<<sub3;
            cout<<"\nPhysics  "<<"\t\t\t"<<"100        "<<"\t\t\t"<<sub4;
            cout<<"\nComputer "<<"\t\t\t"<<"100        "<<"\t\t\t"<<sub5;

        }
#endif //EXAMINATION_MANAGEMENT_PACKAGE_CLASS_STUDENT_H

