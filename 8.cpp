#include<iostream>
using namespace std;

class intnumbers{
    private:
        int a;
        int b;
    public:
        intnumbers(int a,int b){
                this->a=a;
                this->b=b;
            }
       
        intnumbers(int a){
            this->a=a;
            this->b=0;
        }
        virtual void multiplynum(){
            cout<<"Product: "<<a*b<<endl;
        }
};

class floatnumbers:public intnumbers{
    private:
        float x;
        float y;
    public:
        floatnumbers(float x,float y):intnumbers(0,0){
            this->x=x;
            this->y=y;
        }
        void multiplynum(){
            cout<<"Product: "<<x*y<<endl;
        }
};

int main() {
    intnumbers i1(6,7);
    intnumbers i2(5);
    floatnumbers f1(33,4.5);

    i1.multiplynum();
    i2.multiplynum();
    f1.multiplynum();

    intnumbers * ptr=&f1;
    ptr->multiplynum();

    return 0;
}