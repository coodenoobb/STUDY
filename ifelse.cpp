#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"This is if else"<<endl;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>20)
    {
        cout<<"No Joining"<<endl;

    }
    else if(age==20){
        cout<<"Pay $100 to Join"<<endl;

    }
    else {
        cout<<"Pay $80 to Join"<<endl;
    }
}