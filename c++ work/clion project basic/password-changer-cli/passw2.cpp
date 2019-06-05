#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;
long timediff(void); // Prototype
static string secret = "ISUS"; // Password
static long maxcount = 3, maxtime = 60; // Limits
bool getPassword() // Enters and checks a password.
{ // Return value: true, if password is ok.
    bool ok_flag = false; // For return value
    string word; // For input
    int count = 0, time = 0;
    timediff(); // To start the stop watch
    while( ok_flag != true &&
           ++count <= maxcount) // Number of attempts
    {
        cout << "\n\nInput the password: ";
        cin.sync(); // Clear input buffer
        cin >> setw(20) >> word;
        time += timediff();
        if( time >= maxtime ) // Within time limit?
            break; // No!
        if( word != secret)
            cout << "Invalid password!" << endl;
        else
            ok_flag = true; // Give permission
    }
    return ok_flag; // Result
}
long timediff() // Returns the number of
{ // seconds after the last call.
    static long long sec = 0; // Time of last call.
    long oldsec = sec; // Saves previous time.
    time(&sec); // Reads new time.
    return (sec - oldsec); // Returns the difference.
}
bool changepassword()
{
    string word1,word2;
    cout<<"enter a new password 2 to 20 character"<<endl;
    cin.sync(); //Discard former input
    cin>>setw(20)>>word1;
    if(word1.size()>1)
    {
        cout<<"\n ENter the password one more ";
        cin>>setw(20)>>word2;
        if(word1==word2)
        {
            secret=word1;
            return true;
        }

    }
    return false; //no new password created
}