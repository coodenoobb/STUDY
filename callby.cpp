#include<iostream>
using namespace std;
int sum ( int a , int b){
    int c = a+b;
    return c;
}
// Call by value
//void swap (int a, int b){
  //  int temp =a;
  //  a=b;
  //  b= temp;
//}
//Call by refrence
//void swapPointer(int*a , int*b){
//    int temp = *a;
//    *a= *b;
//    *b= temp;
//}
//Call by refrence in c++
void swapRefrenceVar (int &a, int &b){
   int temp =a;
    a=b;
    b=temp;
}
int main()
{
    int x=4,y=5;
    //cout<<"the sum of 4 and 5 is"<<sum(4,5);
    cout<<"The value of a is "<<x<<" the value of y is "<<y<<endl;
    //swap(x,y); this wont work Call by value
    //swapPointer(&x, &y); // call by refrence using pointers
    swapRefrenceVar(x,y);
    cout<<"The value of a is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}