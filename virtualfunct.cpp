#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class BaseClass
{
    public: 

    int var_base;
    void display()
    {
        cout << "Displaying Base Class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
    int var_der;
    void display()
    {
        cout << "Displaying Base Class variable var_base " << var_base << endl;
        cout << "Displaying Derived Class variable var_der " << var_der << endl;
    }
};
int main()
{

    BaseClass *base_class_ptr;
    BaseClass obj_base;

    DerivedClass obj_der;
    base_class_ptr =&obj_der;

    base_class_ptr->var_base=10;

    base_class_ptr->display();

    return 0;
}