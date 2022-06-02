#include<iostream>
using namespace std;
union money;
{
    int a;
    char 'b';
    float c;

}
int main()

{
    union money r1;
    r1.a=15;
    cout<<r1.a;


    return 0;
}