//
// Created by rahul on 18/9/19.
//
#include "Class_student.h"
int main() {
    get_schoolname();
    Result stdd[100];
    cout << "Enter the number of  student  \n";
    int n;
    cin >> n;
    int i=0;
    int j=0;
    cout<<"Welcome_you have certain option to perform \n";
    cout<<"*****Menu****\n";
    cout<<"1. To add a result\n";
    cout<<"2. To delete student information from result file \n";
    cout<<"4. To View Result File of All stududent\n";
    cout<<"5 TO modify the result of a student";
    cout<<"6: To view particular student result";
    int option;
    cin>>option;
    do {
        switch (option) {
            case 1:
                if(j<n) {
                    cout << "add student result:";
                    stdd[j].addresult();
                    j++;
                }
                break;
            case 2:
                cout << "Delete the student information from student file";
                break;
            case 3:
                cout << "Enter the marks of ";
            case 4:
                cout << "view the result file of all student";
                break;
            case 5:
                cout << "please enter the enrollment number to modify";
                break;
            case 6:
                cout << "To display the particular student result please enter the Roll/Enrollment number";
                int reg;
                cout<<"enter registration  number to see your result ";
                cin>>reg;
                int j=0;
                while(stdd[j].getregd()!=reg)
                    ++j;
                stdd[j].individual_result();
                break;
        }
        cout<<"\n Enter An option again\n";
        cin >> option;
    }while(option!=7);
    }
