#include <iostream>
using namespace std;
class matrix{
    int x;
    int **p;
    int y;
public:
    matrix(int,int);
    void get_element(int i,int j,int value)\
    {
        p[i][j] = value;

    }
    int put_element(int i,int j)
    {
        return p[i][j];
    }
    matrix::~matrix()
    {
        for(int i=0;i<x;i++)
            delete p[i];
        delete p;

    }
};
matrix::matrix(int a, int b) {
    x=a;
    y=b;
p=new int *[x];
for(int i=0;i<x;i++)
    p[i]=new int[y];
}
int main()
{
    int m,n;
    cout<<"Entet size of matrix";
    cin>>m>>n;
    matrix A(m,n);
    int i,j,value;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            cin>>value;
            A.get_element(i,j,value);
        }
    cout<<"\n";
        cout<<A.put_element(1,1);
}