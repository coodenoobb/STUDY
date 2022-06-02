#include<iostream>
using namespace std;
int add(int a , int b)
{
    cout<<"using funt with 2 argument"<<endl;
    return a+b;
}
int add( int a , int b, int c){
    cout<<"using funt with 3 argument"<<endl;
    return a+b+c;
}
int main()
{
cout<<"The sum of 5 and 4 is "<<add(5,4)<<endl;
cout<<"The sum of 10,20 and 30 is "<<add(10,20,30)<<endl;
    return 0;
}