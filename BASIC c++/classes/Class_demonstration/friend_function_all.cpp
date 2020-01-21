#include <iostream>
using namespace std;
void friend_function();
void nonfriend_function();
class privateholder{
public:
privateholder(int val) : private_value(val){}

private:
    int private_value;
friend void friend_function();
};
class privateholderderived : public privateholder
{
public:
    privateholderderived(int val): privateholder(val){}
    void access()
    {
        //private_value=10;
    }
private:
    int derived_private_value=0;
    friend void friend_function();
};
void nonfriend_function()
{
    privateholder ph(10);
    std::cout<<"cannot access private member"<<endl;
}
void friend_function(){
    privateholderderived pd(20);
    privateholder ph(10);
    cout<<ph.private_value<<"and" << pd.derived_private_value<<std::endl;
}
class Accesser
{
public:
    void private_acceser();
};
class privateclass{
    privateclass(int val) : private_val(val){}
    friend void Accesser::private_acceser();

private:
    int private_val;
};
void Accesser:: private_acceser()
{
    privateclass ph(120);
    cout<<"in last"<<ph.private_val<<std::endl;
}
class ACS{
public:
    void private_acceser1();
    void private_acceser2();
};
class PH{
public:
    PH(int val):private_value(val) {};
    friend class ACS;

private:
    int private_value;
};
void ACS::private_acceser1() {
    PH ph(10);
    cout<<ph.private_value<<endl;
}
void ACS::private_acceser2() {
    PH ph(1000);
    cout<<ph.private_value-1<<endl;
}
class forfrd{
public:
    void private_acs1();
    void private_acs2();

private:
    int private_value=0;
};
class PHH{
public:
    PHH(int val):private_value(val){};
    friend class forfriend;
    void reverse_Acess(){
        forfrd a;
        cout<<endl/*a.private_value cannot acess private members */;
    }

private:
    int private_value;
};
int main()
{
    nonfriend_function();
    friend_function();
    Accesser p;
    p.private_acceser();
}
