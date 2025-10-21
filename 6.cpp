#include <iostream>
using namespace std;

class Sports;

class Student{
    private:
        int marks;
    public:
        Student(int m){
            marks=m;
        }
        friend void result(const Student&, const Sports&);
};

class Sports {
    private:
        int score;
    public:
        Sports(int s){
            score=s;
        }
        friend void result(const Student&,const Sports&);
};

void result(const Student& student, const Sports& sport){
    cout<<"Marks: "<<student.marks<<endl<<"Score: "<<sport.score<<endl;
}

int main() {
    Student s1(95);
    Sports sp1(33);
    result(s1,sp1);
    return 0;
}
