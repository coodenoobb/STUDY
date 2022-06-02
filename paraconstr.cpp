#include<iostream>
using namespace std;
class Point{
    int x, y;
    public:
    Point(int a , int b){
        x=a;
        y=b;

    }
    void Display(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }

};
int main()
{
    Point p (2,5);
    p.Display();
    Point q(4,8);
    q.Display();


    return 0;
}