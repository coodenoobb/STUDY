#include<iostream>
using namespace std;
/*
student--> test
student-->sports
test-->result
sports-->result

*/
class Student{
    protected:
    int roll;
    public:
    void set_num(int a){
        roll =a ;
    }
    void print_no(){
        cout<<"Roll number is "<<roll<<endl;
    }
};
class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"Your result is : "<<endl
        <<"Maths"<<maths<<endl
        <<"Physics"<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score( float sec){
        score = sec;
    }
    void print_score(){
        cout<<"Score is "<<score<<endl;
    }

};
class result : public Test, public Sports{
    private:
    float total;
    public:
    void display(){
        total = maths+physics+score;
        print_no();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }

};
int main()
{
    result Joi;
    Joi.set_marks(86,96);
    Joi.set_num(52);
    Joi.set_score(65);
    Joi.display();
    return 0;
}