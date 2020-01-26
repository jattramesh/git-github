//add all necessary libraries
#include <stdio.h>
#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    //let max length of data entered is 20
    char data[15];
    int n=0,option=0,count_n=0;
    //this is initial marks to each subject
    string empty="00";
    string proctor="";
    //name of file in which data is stored
    ifstream f("Student.txt");
    string line;
    //the following loop counts the number of lines in the file
    for(int i=0;std::getline(f,line);++i)
    {
        count_n++;
    }
    while(option!=6)
    {
        //this print all avialible option in the database
        cout<<"\n Avialiable operations: \n1.Add new student \n2."
        <<"Student Login\n3. Faculty Login\n4. Proctor Login\n5. Admin View\n";
       cin>>option;
        if(option==1)
        {
            cout<<"Enter the number of Students: ";
            cin>>n;
            count_n=count_n+n;
            for(int i=0;i<n;i++)
            {
                ofstream outfile;
                outfile.open("Student.txt",ios::app);
                //all data of student is save line by line
                cout<<"Enter your registration number: ";
                cin>>data;
                outfile<<data<<"\t";
                cout<<"Enter your name: ";
                cin>>data;
                int len=strlen(data);
                while (len<15)
                {
                    data[len]=' ';
                    len=len+1;
                }
                outfile<<data<<"\t";
                outfile<<empty<<"\t";
                outfile<<empty<<"\t";
                cout<<"Enter your proctor ID";
                cin>>proctor;
                outfile<<proctor<<endl;
                outfile.close();
            }

        }
        else if(option==2)
        {
            char regdno[9];
            cout<<"Enter your registration number: ";
            cin>>regdno;;
            ifstream infile;
            int check=0;
            infile.open("Student.txt",ios::in);
            //this loop print data according to registration number
            while (infile>>data)
            {
                if(strcmp(data,regdno)==0)
                {
                    cout<<"\nRegistration Number:"<<data<<endl;
                    infile>>data;
                    cout<<"Name:"<<data<<endl;
                    infile>>data;
                    cout<<"CSE101 Marks:"<<data<<endl;
                    infile>>data;
                    cout<<"CSE102 Marks"<<data<<endl;
                    infile>>data;
                    cout<<"Proctor ID : "<<data<<endl;
                    infile.close();
                    check=1;
                }
                if(check==0)
                    cout<<"No such registration number found";

            }
        }
        else if(option==3)
        {
            char subcode[7];
            cout<<"Enter your subject code";
            cin>>subcode;
            string code1="CSE101",code2="CSE102",mark="";
            ifstream infile;
            int check=0;
            cout<<"\n Avialiable options: \n1. Add data about marks\n"
            <<"2. View data \n Enter option: ";
            cin>>option;
            if(option==1)
            {
                cout<<"Warning you would have to add marks of all students\n";
                for(int i=0;i<count_n;i++)
                {
                    fstream infile("Student.txt");
                    if(strcmp(subcode,code1.c_str())==0) {
                        infile.seekp(23 + 34* i, std::ios_base::beg);
                        cout << "Enter the mark of student#" << (i + 1) << ":";
                        cin >> mark;
                        infile.write(mark.c_str(), 2);
                        check=1;
                    }
                    if(strcmp(subcode,code2.c_str())==0)
                    {
                        infile.seekp(26+34*i,std::ios_base::beg);
                        cout<<"Enter the mark of student#"<<(i+1)<<":";
                        cin>>mark;
                        infile.write(mark.c_str(),2);
                        check=1;
                    }
                }

            }
            //view the marks of student
            else if(option==2)
            {
                infile.open("Student.txt",ios::in);
                if(strcmp(subcode,code1.c_str())==0)
                {
                    cout<<"Registration number - Marks\n"<<endl;
                    while (infile>>data)
                    {
                        cout<<data;
                        infile>>data;
                        infile>>data;
                        cout<<"-"<<data<<endl;
                        infile >> data;
                        infile>>data;
                        check=1;
                    }
                }
                infile.close();
                infile.open("Student.txt",ios::in);
                if(strcmp(subcode,code2.c_str())==0)
                {
                 cout<<"Registration number - Marks \n"<<endl;
                 while(infile>>data)
                 {
                     cout<<data;
                     infile>>data;
                     infile>>data;
                     infile>>data;
                     cout<<"-"<<data<<endl;
                     infile>>data;
                     check=1;
                 }
                }
            }
            if(check==0)
                cout<<"No Such subject code found!"<<endl;
        }//display all details of student under same proctor ID
        else if(option==4)
        {
            char procid[7];
            cout<<"Enter your proctor ID";
            cin>>procid;
            int check=0;
            char temp1[100],temp2[100],temp3[100],temp4[100],id[100];
            ifstream infile;
            infile.open("Student.txt",ios::in);
            while(infile>>temp1)
            {
                infile>>temp2;
                infile>>temp3;
                infile>>temp4;
                infile>>id;
                if(strcmp(id,procid)==0)
                {
                    cout<<"\n Registration Number: "<<temp1<<endl;
                    cout<<"Name:"<<temp2<<endl;
                    cout<<"CSE101 Mark"<<temp3<<endl;
                    cout<<"CSE102 Mark"<<temp4<<endl;
                    check=1;
                }
            }
            infile.close();
            if(check==0)
            {
                cout<<"No such proctor ID found!"<<endl;
            }
        }
        //this part will work as admin view
        else if(option==5)
        {
            char password[25];
            cout<<"Enter the admin password";
            cin>>password;
            string  pass="pass@123";
            if (strcmp(password,pass.c_str()) == 0){
                cout << "Reg No.       \tName\tCSE1001\tCSE1002\tProctor ID" << endl;
                ifstream infile;
                infile.open("Student.txt",ios::in);
                char data[20];

                while(infile >> data){
                    cout << data << "\t\t";
                    infile >> data;
                    cout << data << "\t";
                    infile >> data;
                    cout << data << "\t";
                    infile >> data;
                    cout << data << "\t";
                    infile >> data;
                    cout << data << endl;
                }
            }
        }
    }

}
