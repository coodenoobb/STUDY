#include<iostream>
#include<string>
using namespace std;
class Binary{
    string s;


public:
    void read();
    void check();
    void ones();
    void display();


};
    void Binary ::read(){
        cout<<"Enter a binary number:"<<endl;
        cin>>s;
    }
    void Binary ::check(){
        for(int i=0;i<s.length();++i){
            if(s.at(i)!='0'&&s.at(i)!='1'){
                cout<<"Non Binary"<<endl;
                exit(0);
            }
        }

    }
    void Binary :: ones(){
        //check(); ------> Nested mem funct
        for(int i =0;i<s.length();++i){
            if(s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else 
            {
                s.at(i)='0';
            }
        }
    }
    
    void Binary :: display(){
        cout<<"Displaying the number"<<endl;
        for(int i =0;i<s.length();++i){
            cout<<s.at(i);
        }
        cout<<endl;
    }

int main()
{
    Binary bin;
    bin.read();
    bin.check();
    bin.display();
    bin.ones();
    bin.display();

    return 0;
}