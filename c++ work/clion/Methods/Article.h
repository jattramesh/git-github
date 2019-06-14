//
// Created by Rahul on 6/11/2019.
//

#ifndef METHODS_ARTICLE_H
#define METHODS_ARTICLE_H

#include <string>
using namespace std;
class Article
{
    long arnum;
    string arname;
public:
    Article(long,const string&,double);

    void print();
    const string & getName() const {return arname;}
    long getNr() const{return arnum;}
    double getSale() const{return sales;}
    bool setname(const string& s)
    {
        if(s.size()<1)
        return false ;
        arname=s;
        return true;
    }
    void setNr(long n)
    {
    arnum=n;
    }
    double setSales(double v) {
     return sales = v > 0.0 ? v : 0.0;

    }

    double sales;
};
#endif //METHODS_ARTICLE_H
