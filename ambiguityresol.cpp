#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Ho are you" << endl;
    }
};
class Base2
{
    void greet()
    {
        cout << "Kaise ho" << endl;
    }
};
class Derived : public Base1, public Base2{
 int a;
 public:
 void greet(){
     Base1::greet();
 }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    Derived d;
    d.greet();

    return 0;
}