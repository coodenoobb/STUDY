#include<iostream>
using namespace std;
class number{
    int a;
    public: 
    number(){}
    number(int num){
        a= num;
    }
    number(number &obj){
        cout<<"Copy constr";
        a=obj.a;
    }
    void display(){
        cout<<"The number is "<<a<<endl;
    }


};
int main()
{
    number x(10),y,z;
    x.display();
    y.display();
    z.display();

    return 0;
}