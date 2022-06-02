#include<iostream>
using namespace std;
int count =0;
class num{
    public:
    num(){
        count++;
        cout<<"Const is called for object number "<<count<<endl;

    }
    ~num(){
        cout<<"Dest is called for object number "<<count<<endl;
        count--;

    }
};
int main()
{
    cout<<"Inside main<<endl";
    cout<<"Creating first obj n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creatig two more object"<<endl;
        num n2,n3;
        cout<<"Exiting to main"<<endl;
    }

    return 0;
}