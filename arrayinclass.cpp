#include<iostream>
using namespace std;
class shop{
int itemId[100];
int itemPrice[100];
int counter;
public:

    void incounter (void){
        counter=0;

    }
    void setPrice(void);
    void disPrice(void);


};

void shop ::setPrice(void ){
    cout<<"Enter Id of the item "<< counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of the item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop ::disPrice(void){
    for(int i =0;i<counter;++i){
        cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}


int main()
{
    shop mart;
    mart.incounter();
    mart.setPrice();
    mart.setPrice();
    mart.setPrice();
    mart.setPrice();
    mart.disPrice();

    return 0;
}