#include <iostream>
using namespace std;
class BankDrp
{
    int principle;
    int year;
    float rate;
    float returnval;

public:
    BankDrp() {}
    BankDrp(int p, int y , float r);
    BankDrp(int p, int y, int r);
    void show();
};
BankDrp::BankDrp(int p, int y, float r)
{
    principle = p;
    year = y;
    rate = r;
    returnval = principle;
    for (int i = 0; i < y; ++i)
    {
        returnval = returnval * (1 + rate);
    }
}
BankDrp::BankDrp(int p, int y, int r)
{
    principle = p;
    year = y;
    rate = float(r) / 100;
    returnval = principle;
    for (int i = 0; i < y; ++i)
    {
        returnval = returnval * (1 + rate);
    }
}
void BankDrp::show()
{
    cout << endl
         << "Principle amount was " << principle << endl
         << " Return value after " << year << " will be " << returnval << endl;
}
int main()
{
    BankDrp b1,b2;
    int p;
    int y;
    float r;
    int R;
    cout<<"Enter the value of P , Y and r "<<endl;
    cin>>p>>y>>r;
    b1 = BankDrp(p,y,r);
    b1.show();
    cout<<"Enter the value of P , Y and R "<<endl;
    cin>>p>>y>>R;
    b2 = BankDrp(p,y,R);
    b2.show();
    
    return 0;
}