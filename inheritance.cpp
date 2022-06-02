#include<iostream>
using namespace std;
//Base Class
class Employee{
    public:
    int id;
    float salary;
};
//Derived Class
class prog: Employee{
    public:
    int lang =9;
};


int main()
{
    Employee Jo,Ko;

    return 0;
}