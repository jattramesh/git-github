//
// Created by Rahul on 6/4/2019.
//

#include <iostream>
void message()            //global function
{
    std::cout<<"within function :: message() \n";

}
namespace A {
    using namespace std;  //Names of namespace std are avilable now
    void message()
    {
       cout<<" within  function A::message()\n ";

    }
}
namespace B
{
    using std::cout;
    void message(void);
}
void B::message(void) {
    cout<<"within function B::mesaage(\n";
}
int main()
{
    using namespace std; //names of namespace std are visble here
    using B::message;
    cout<<"testing namespace \n";
    cout<<"\n call of A::message()"<<endl //function name with brace s
    A::message();
    cout<<"\n call of B::message()"<<endl;
    message(); //::message() is hidden due to use of using-decleration
    cout<<"csll to global function message"<<endl;
    ::message();


}