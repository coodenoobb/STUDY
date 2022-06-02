#include<iostream>
using namespace std;

class empl
{
    private:
    int a,b,c;

    public:
    int d,e;

    void setData(int  , int , int );
    void getData(){
        cout<<"Values are "<<a<<endl;
        cout<<"Values are "<<b<<endl;
        cout<<"Values are "<<c<<endl;
        cout<<"Values are "<<d<<endl;
        cout<<"Values are "<<e<<endl;
    };
};
void empl ::setData(int a1, int b1, int c1 ){ //this is function defining
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    empl Jack;
    Jack.setData(10,52,63);
    Jack.d=85;
    Jack.e=74;
    Jack.getData();


    return 0;
}