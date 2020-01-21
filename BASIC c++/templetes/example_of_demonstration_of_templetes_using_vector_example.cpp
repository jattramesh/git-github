//
// Created by rahul on 17/8/19.
//
#include <iostream>
using namespace std;
const int size=3;
/*
class vector{
    int *v;
    int size;
public:
    vector(int m)
    {
        size=m;
        v=new int[size];
        for(int i=0;i<size;i++)
            v[i]=0;
    }
    vector(int *a)
    {
        for(int i=0;i<size;i++)
            v[i]=a[i];
    }
    int operator*(vector &y)
    {
        int sum=0;
        for(int i=0;i<size;i++)
            sum+=this->v[i]*y.v[i];
        return sum;
    }
    void print(void)
    {
        cout<<"printing_information"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<v[i]<<endl;
        }
    }

};*/
template <class T>
class vector{
            T* v;
        public:
            vector()
            {
                v=new T [size];
                for(int i=0;i<size;i++)
                    v[i]=0;
            }
            void assign(T* a)
            {
                for(int i=0;i<size;i++)
                    v[i]=a[i];
            }
            T operator*(vector &y)
            {
                T sum=0;
                for(int i=0;i<size;i++)
                sum+=v[i]*y.v[i];
                return sum;
            }
            void print()
            {
                for(int i=0;i<size;i++)
                cout<<v[i];
            }
        };
int main()
{
     float x[3]={1.4,2.4,3.4};
    float  y[3]={1.2,2.3,3.4};
    vector <float>v1;
    vector <float>v2;
    v1.assign(x);
    v1.print();
    v2.assign(y);
    v2.print();
    float  R=v1*v2;
    cout<<"R"<<R<<endl;
    return 0;
}
