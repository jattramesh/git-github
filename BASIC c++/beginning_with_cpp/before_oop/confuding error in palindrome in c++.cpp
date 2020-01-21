#include<iostream>
#include<string>
using namespace std;
char key='y';
string header ="******Testing palindrome /***********",prompt("enter a word "),line(50,'*');
int main()
{
    string word ;
cout<<"\n\t"
    <<header<<endl;
    while(key=='y' || key=='Y')
    {
        cout<<'\n'<<line<<'\n'<<prompt;
        cin>>word;
        //compares first and last character
        //the second and second to last
        int i=0,j;
        j=word.length()-1;
        for(;i<=j;++i,--j)
            if(word[i]!=word[j])
            break;
            if(i>j)
            cout<<word<<"is palindrome"<<endl;
         else

        cout<<word<<"is not a palindrome"<<endl;
        cout << "\nRepeat? (y/n) ";
        do
        cin.get(key);
        while( key != 'y' && key != 'Y'
        && key != 'n' && key != 'N');
        cin.sync();


}
}
