#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        //break;
    case 22:
        cout<<"You are 22"<<endl;
    default:
        cout<<"Others"<<endl;
        //break;
    }
}