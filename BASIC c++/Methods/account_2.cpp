//
// Created by Rahul on 6/9/2019.
//

#include "acessmethod_for_account_header.h"
int main() {
    account giro("cheeres", 122, -18.33), save("luke");//account::account(string & ) only one parameter other set to default
    account depot("rameswar");
    giro.display();
    save.display();
    account temp;//implicitly initialized to default constructor
    temp.display();
    save.display();
    save.display();
  giro.setNr(555);
  giro.display();
    return 0;
}
