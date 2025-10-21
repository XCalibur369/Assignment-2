#include<iostream>
#include<string>
using namespace std;

class dictionary{
    private:
        int size;
        int keytype;
        int valuetype;
        int *intkey=nullptr;
        string *strkey=nullptr;
        string *strvalue=nullptr;
        int *intvalue=nullptr;

    public:
        dictionary(int keytype,int valuetype,int size) {
            this->size=size;
            this->keytype=keytype;
            this->valuetype=valuetype;

            if (keytype==0) intkey=new int[size];
            else strkey=new string[size];

            if (valuetype==0) intvalue=new int[size];
            else strvalue=new string[size];

            for (int i=0;i<size;i++) {
                cout<<"Enter the key of element "<<i+1<<": ";
                if (keytype==0) cin>>intkey[i];
                else cin>>strkey[i];

                cout<<"Enter the value of element "<<i+1<<": ";
                if (valuetype==0) cin>>intvalue[i];
                else cin>>strvalue[i];
            }
        }


        void print(){
            cout<<"The dictionary elements are: "<<endl;
            if(keytype==0 && valuetype==0){
                for(int i=0;i<size;i++){
                    cout<<intkey[i]<<" : "<<intvalue[i]<<endl;
                }
            } else if(keytype==0 && valuetype!=0){
                for(int i=0;i<size;i++){
                    cout<<intkey[i]<<" : "<<strvalue[i]<<endl;
                }
            } else if(keytype!=0 && valuetype==0){
                for(int i=0;i<size;i++){
                    cout<<strkey[i]<<" : "<<intvalue[i]<<endl;
                }
            }
            else{
                for(int i=0;i<size;i++){
                    cout<<strkey[i]<<" : "<<strvalue[i]<<endl;
                }
            }
        }

        ~dictionary(){
            delete []intkey;
            delete []intvalue;
            delete []strkey;
            delete []strvalue;
            cout << "Destructor called" << endl;
        }

        
};


int main() {
    dictionary F1teamsanddrivers(1,1,3);
    dictionary Driverrating(1,0,3);
    dictionary GPPodium(0,1,3);
    dictionary Numbersandtheirsquares(0,0,3);
    F1teamsanddrivers.print();
    Driverrating.print();
    GPPodium.print();
    Numbersandtheirsquares.print();

    return 0;
}