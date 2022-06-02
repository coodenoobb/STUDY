#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called:" << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called:" << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d):Base1(a), Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Dervived class constructor called"<<endl;
    }
    void printDataDer(){
        cout<<"The value of derived 1 is "<<derived1<<endl;
        cout<<"The value of derived 2 is "<<derived2<<endl;
        
    }

};
int main()
{
    Derived mouse(10,20,30,40);
    mouse.printDataBase1();
    mouse.printDataBase2();
    mouse.printDataDer();


    return 0;
}