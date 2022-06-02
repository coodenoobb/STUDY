#include<iostream>
using namespace std; //1929
class Shop{
    int id;
    float price;
    public:
    void setdata(int a, int b){
        id =a ;
        price =b;

    }

    void getdata(void){
        cout<<"Item id is "<<id<<endl;
        cout<<"Price is"<<price<<endl;
    }

};
int main()
{
    int size = 3;
    int p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp= ptr;
    for( int i =0 ;i<size;i++){
        cout<<"Id an price of item "<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;


    }

    for(int i =0;i<size;i++){
        cout<<"Item number "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }

    return 0;
}