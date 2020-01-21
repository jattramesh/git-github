//
// Created by rahul on 19/7/19.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, j;
    for (i = 1; i < 6; i++) {
        {
            for (j = i; j > 0; j--)
                cout << i;
        }
        cout << endl;
    }
}