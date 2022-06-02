#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imag << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imag = b;
    }
};

int main()
{
   //Complex c1;
   // Complex *ptr = &c1;

   Complex *ptr =new Complex;
    (*ptr).setdata(10, 5);
    (*ptr).getdata();

    return 0;
}