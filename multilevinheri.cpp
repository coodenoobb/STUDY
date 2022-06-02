#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;

public:
    void setroll(int);
    void getroll(void);
};
void Student ::setroll(int r)
{
    roll = r;
}
void Student ::getroll()
{
    cout << "The roll number is " << roll << endl;
}
class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void setmarks(float, float);
    void getmarks();
};
void Exam::setmarks(float m1, float p1)
{
    math = m1;
    physics = p1;
}
void Exam::getmarks()
{
    cout << "Marks for maths and physics are " << math << " & " << physics << endl;
}

class Result : public Exam
{
    float percent;

public:
    void display()
    {
        getroll();
        getmarks();
        cout << "Percentage is " << (math + physics) / 2 << endl;
    };
};

int main()
{
    Result Sam;
    Sam.setroll(12);
    Sam.setmarks(96.2, 99.63);
    Sam.display();

    return 0;
}