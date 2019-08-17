//
// Created by rahul on 17/8/19.
//
template <class T>
class vector{
    T *v;
    int size;
public:
    vector(int m);
    vector(T* a);
    T operator*(vector & y);
};
template <class T>
vector<T>::vector(int m)
{
    v=new T[size=m];
    for(int i=0;i<size;i++)
        v[i]=0;
}
template <class T>
vector<T>::vector(T *a)
{
    for(int i=0;i<size;i++)
        v[i]=a[i];
}
template <class T>
T vector<T>::operator*(vector &y) {
 T sum=0;
 for(int i=0;i<size;i++)
     sum+=this->v[i]*y.v[i];
 return sum;
}