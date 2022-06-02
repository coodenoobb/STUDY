#include<iostream>
using namespace std;
typedef struct employee

{
 int id;
 char fav;
 float salary;   
}ep;

int main()
{
    ep jake;
    //struct employee jake;
    //struct pet;

    jake.id=656;
    jake.fav='j';
    jake.salary=6566646;
    cout<<jake.id;

    return 0;
}