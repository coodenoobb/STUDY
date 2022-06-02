#include<iostream>
using namespace std;
class inherc{
    private:
    int x,y;
    string str;

    public:
    void setv(int x,int y);
    void showval(){
        cout<<"Value is showing"<<endl;
    }


};
void inherc::setv(int a , int b){
    cout<<"Enter two values: "<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<a+b<<endl;

}
class derv: public inherc{

public:
    void callit(){
    cout<<"Derived is call"<<endl;
    }
    


};
int main()
{
    int q,w;
    inherc i1;
    i1.setv(q,w);
    i1.showval();
    derv d1;
    d1.callit();
    d1.setv(q,w);
    d1.showval();


    return 0;
}