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
    int option;
    cin>>option;
    do {
        switch (option) {
            case 1:
                while(j<n) {
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
                cout << "To display the particular student result please enter the Roll/Enrollment number";
                stdd[0].individual_result(0);
                break;
            case 6:
                cout << "please enter the enrollment number to modify";
                break;
        }
        cin >> option;
    }while(option!=6);
    }
