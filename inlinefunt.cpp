#include<iostream>
using namespace std;
inline int pro(int a, int b){
    return a*b;
}
int main()
{
    int x,y;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<pro(x,y);
 
    return 0;
}