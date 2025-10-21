#include <iostream>
using namespace std;

class Person{
    private:
        string name;
    public:
        void setPerson(string name) {
            this->name=name;
        }
        void showPerson() {
            cout<<"Name: "<<name<<endl;
        }
};

class Employee:public Person{
    private:
        int id;
        string department;
    public:
        void setEmployee(int id,string dept) {
            this->id=id;
            department=dept;
        }
        void showEmployee(){
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Department: "<<department<<endl;
        }
};

class Manager:public Employee {
private:
    string project;
public:
    void setManager(string project){
        this->project=project;
    }
    void showManager(){
        showPerson();
        showEmployee();
        cout<<"Project Head of: "<<project<<endl;
    }
};

int main() {
    Manager m1;
    m1.setPerson("James T Kirk");
    m1.setEmployee(1701,"Enterprise");
    m1.setManager("Explore");
    m1.showManager();
    return 0;
}
