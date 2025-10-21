#include <iostream>
using namespace std;

class Shape{
    private:
        int area;
        int perimeter;
    public:
        void details(){
            cout<<"Area: "<<area<<endl<<"Perimeter: "<<perimeter<<endl;
        }
        void setarea(int a){
            area=a;
        }
        void setperimeter(int p){
            perimeter=p;
        }
};

class Rectangle:public Shape{
    private:
        int l;
        int b;
    public:
        Rectangle(int l,int b){
            this->l=l;
            this->b=b;
            setarea(l*b);
            setperimeter(2*(l+b));
        }
};

int main(){
    Rectangle r1(5,10);
    r1.details();
    return 0;
}
