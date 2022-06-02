#include<iostream>
using namespace std;

int sum (int a, int b){
    int c= a+b;
    return c;
}

int main()
{
    int num1,num2;
    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    cout<<"Sum is "<<sum(num1, num2);

    return 0;
}