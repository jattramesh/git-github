//
// Created by rahul on 6/8/19.
//
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int i=0;
    const char *arr[10] = {"books", "telephone", "ramesh", "lokesh", "sachin"};
    char string[25];
    cout << "\n\nEnter the favorite leisure parasuite";
    cout<<arr[1]<<endl;
    cin >> string;
    for (i = 0; i < 4; i++)
        if (strcmp(string, arr[i])) {
            cout << "\n\n your favorite words" << "is aviliable here " << endl;
            break;
        }if(i==4)
            cout<<"not aviliable here \n";
}
