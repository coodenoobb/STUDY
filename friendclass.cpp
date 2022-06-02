#include <iostream>
using namespace std;
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumReal(complex, complex);
    int sumImg(complex, complex);
    

};

class complex
{
    int a, b;
    // Individually declarating funt as friend 
    friend int calculator::sumReal(complex, complex);
    friend int calculator::sumImg(complex, complex);

    //Declaring entire class as friend 
    friend class calculator;

public:
    void set(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "Number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumImg(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.set(1, 2);
    o2.set(3, 4);

    calculator cal;
    int res = cal.sumReal(o1, o2);
    cout << "The sum of real part is " << res << endl;

    int ress = cal.sumImg(o1, o2);
    cout << "The sum of imaginary part is " << ress << endl;


    return 0;
}