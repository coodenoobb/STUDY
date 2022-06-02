#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int* ptr=&a;

    cout<<"The value of a is "<<*(ptr)<<endl;

    int *p= new int(40);
    cout<<"The value at address p is "<<*(p)<<endl;

    return 0;
}