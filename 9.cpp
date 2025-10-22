#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    float balance;
public:
    BankAccount(int accNum,float balance){
        accountNumber=accNum;
        this->balance=balance;
    }
    void deposit(float amount){
        if(amount>0){
            balance+=amount;
            cout<<"New balance: "<<balance<<endl;
        }else {
            cout<<"Invalid deposit amount."<<endl;
        }
    }

    void withdraw(float amount){
        if(amount>balance){
            cout<<"Insufficient balance."<<endl;
        }else if(amount<=0){
            cout<<"Invalid withdrawal amount."<<endl;
        }else{
            balance-=amount;
            cout<<"New balance: "<<balance<<endl;
        }
    }

    void display() {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount account(1701, 3377.44);
    account.display();
    account.deposit(1500);
    account.withdraw(750);
    account.withdraw(1800);
    //account.withdraw(5000); 
    
    return 0;
}
