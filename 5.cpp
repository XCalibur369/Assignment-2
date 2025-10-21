#include <iostream>
using namespace std;

class Person{
    public:
        void name_detail(){
            cout<<"Max Verstappen"<< endl;
        }
};

class Athlete{
    public:
        void name_detail(){
            cout<<"Max Verstappen Red Bull Racing"<<endl;
        }
};

class SportsPerson : public Person,public Athlete{
public:
    void display(){
        Person::name_detail();
        Athlete::name_detail();
    }
};

int main(){
    SportsPerson f1driver;
    f1driver.display();
    return 0;
}
