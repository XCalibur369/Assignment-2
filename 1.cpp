#include<iostream>
using namespace std;

class list{
    private:
        int *arr;
        int size;
    public:
        list(int size){
            this->size=size;
            arr=new int[size];
            for(int i=0;i<size;i++){
                cout<<"Enter value of index "<<i<<" of the array: "<<endl;
                cin>>arr[i];
            }
        }
        
        void append(int value){
            int *temp=new int[size+1];
            for(int i=0;i<size;i++){
                temp[i]=arr[i];
            }
            temp[size]=value;
            delete []arr;
            arr=temp;
            size++;
            print();
        }

        void deleteel(int index){
            int *temp=new int[size-1];
            for(int i=0;i<index;i++){
                temp[i]=arr[i];
            }
            for(int i=index+1;i<size;i++){
                temp[i-1]=arr[i];
            }
            delete []arr;
            arr=temp;
            size--;
            cout<<"After modification: "<<endl<<endl;
            print();
        }
        
        void pop(){
            if(size==0){
                cout<<"List is empty. Underflow"<<endl;
                exit(1);
            }else{
                int *temp=new int[size-1];
                for(int i=0;i<size-1;i++){
                    temp[i]=arr[i];
                }
                delete []arr;
                arr=temp;
                size--;
                cout<<"After modification: "<<endl<<endl;
                print();
            }
        }

        void insert(int index,int value){
            int *temp=new int[size+1];
            temp[size]=0;
            for(int i=0;i<index;i++){
                temp[i]=arr[i];
            }
            temp[index]=value;
            for(int i=index;i<size;i++){
                temp[i+1]=arr[i];
            }
            delete []arr;
            arr=temp;
            size++;
            cout<<"After modification: "<<endl<<endl;
            print();
        }

        void print(){
            cout<<"The elements in the list are:"<<endl<<endl;
            for(int i=0;i<size;i++){
                cout<<arr[i]<<endl;
            }
            cout<<endl<<"End of list"<<endl;
        }

        ~list(){
            delete []arr;
        }
};

int main(){
    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;
    list l(size);
    
    int f=1;
    int dec;

    while(dec!=0){
        cout<<"Enter what operation you wish to perform: "<<endl<<"1. Append"<<endl<<"2. Pop"<<endl<<"3. Delete"<<endl<<"4. Insert"<<endl<<"5. Length"<<endl<<"6. Print"<<endl<<"0. Exit"<<endl;
        cin>>dec;
        switch(dec){
            case 1:
                int value;
                cout<<"Enter the value you wish to append: "<<endl;
                cin>>value;
                l.append(value);
                break;
            case 2:
                l.pop();
                break;
            case 3:
                int indexdel;
                cout<<"Enter the index of the element you wish to delete: "<<endl;
                cin>>indexdel;
                l.deleteel(indexdel);
                break;
            case 4:
                int index;
                cout<<"Enter the index at which you wish to insert the value: "<<endl;
                cin>>index;
                cout<<"Enter the value you wish to insert: "<<endl;
                cin>>value;
                l.insert(index,value);
                break;
            case 5:
                cout<<"The length of the list is: "<<size<<endl;
                break;
            case 6:
                l.print();
                break;
            default:
                cout<<"Exit"<<endl;
                break;
        }
    }

    return 0;
}