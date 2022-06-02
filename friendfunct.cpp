#include<iostream>
using namespace std;
class y;
class x{
    friend void add(x,y);
    int data;
    public: 
    void setvalue(int value){
        data = value;
    }

};
    class y{
        friend void add(x,y);
        int dataa;
        public: 
        void setvalue(int value){
            dataa = value;
        }
    };
    void add(x o1, y o2){
        cout<<"Sum of data of X and Y object is "<<o1.data + o2.dataa<<endl;
    }
int main()
{
    x a;
    a.setvalue(10);

    y b;
    b.setvalue(5);

    add(a,b);


    return 0;
}