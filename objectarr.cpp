#include<iostream>
using namespace std;

class Std {

    int id;
    int marks;
public:
    void setId(){
        cout<<"Enter id of the student "<<endl;
        cin>>id;
    }

    void getId(){
        cout<<"Id of the student is "<<id<<endl;
    }
};
int main()
{

    Std a[5];

    for(int i=0;i<5;++i){
        a[i].setId();
        a[i].getId();
    }





    return 0;
}