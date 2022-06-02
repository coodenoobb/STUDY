#include<iostream>
using namespace std;

class Base1{
    protected:
    int base1int;

    public:
    void setBase1int(int a){
        base1int =a;
    }

};
class Base2{
    protected:
    int base2int;

    public:
    void setBase2int(int a){
        base2int =a;
    }

};
class Derived : public Base1, public Base2
{
    public:
    void show(){
        cout<<"Value of Base1 is "<<base1int<<endl;
        cout<<"Value of Base2 is "<<base2int<<endl;
        cout<<"Sum is "<<base1int+base2int<<endl;
    }

};
int main()
{
    Derived oil;
    oil.setBase1int(25);
    oil.setBase2int(50);
    oil.show();

    return 0;
}