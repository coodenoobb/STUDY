#include<iostream>
using namespace std;
class movie{
    public:
    string name;
    int rating;
    void set(){
        cout<<"Enter the name of movie "<<endl;
        cin>>name;
        cout<<"Provide the rating "<<endl;
        cin>>rating;
    }
    void display(){
        cout<<"The movie "<<name<<" has "<<rating<<" ratings."<<endl;
    }
};
class action: virtual public movie
{
    void actionn(){
    cout<<"Showing for Action movies"<<endl;
    }


};
class thriller: virtual public movie 
{
    void thrillerr(){
        cout<<"Showing for Thriller movies"<<endl;
    }

};
class combi : public action , public thriller{

    void showcombi(){
        cout<<"~~~~~~~~~~~~~~~~~Displaying combine result~~~~~~~~~~~~~~"<<endl;
    }
};

int main()
{
    combi c1;
    c1.set();
    c1.display();
    

    
    return 0;
}