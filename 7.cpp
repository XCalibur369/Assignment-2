#include <iostream>
using namespace std;

class Sorter {
private:
    int *arr;
    int n;
public:
    Sorter(int n){
        this->n=n;
        arr=new int[n];
        cout<<"Enter "<<n<<" elements: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
    }
    void display(){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<endl;
    }
    void bubbleSort(){
        for(int i=0;i<n-1;++i)
            for(int j=0;j<n-i-1;++j)
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
    }
    void insertionSort(){
        for(int i=1;i<n;i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    void selectionSort(){
        for (int i=0;i<n-1;i++){
            int index=i;
            for (int j=i+1;j<n;j++)
                if (arr[j]<arr[index])
                    index=j;
            swap(arr[i],arr[index]);
        }
    }
};

int main(){
    Sorter s(10);


    cout << "Original: ";
    s.display();
    cout<<endl<<endl;
    s.bubbleSort();
    cout << "Bubble Sorted: ";
    s.display();
    cout<<endl<<endl;

    s.insertionSort();
    cout << "Insertion Sorted: ";
    s.display();
    cout<<endl<<endl;

    s.selectionSort();
    cout << "Selection Sorted: ";
    s.display();
    cout<<endl<<endl;

    return 0;
}