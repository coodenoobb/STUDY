#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    //Creating constructor with parameter

    Complex(int , int );
    void printNumber(){
        cout<<"The number is "<< a <<" + "<<b<<"i"<<endl;
    }
};
Complex ::Complex(int x, int y){
    a=x;
    b=y;
}
int main()
{   
    Complex a(4,5);    //Implicit calling
    a.printNumber();

    Complex b = Complex(8,10);      //Explicit Calling
    b.printNumber();



    return 0;
}