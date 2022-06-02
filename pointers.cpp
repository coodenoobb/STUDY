#include<iostream>
using namespace std;
int main()
{
int a=5;
int* b=&a;
//& is address of value
cout<<"Address of a is "<<b<<endl;
cout<<"Address of a is "<<&a<<endl;
//* is value at address
cout<<"The value at b is "<<*b<<endl;
    return 0;
}