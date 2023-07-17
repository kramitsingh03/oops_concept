/*b. Create a class Array with an integer array as its data member. Multiply the Array object with a 
constant using friend function*/
#include <iostream>
using namespace std;
class Array{
    int arr[5],number,result;
    public:
    void getdata(){
        cout<<"Enter number in array :"<<endl;
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
       cout<<"Enter the number to be multiply :"<<endl;
       cin>>number;
    }
     friend void multiply(Array &obj);
    
};
void multiply(Array &obj){
    cout<<"Answer :"<<endl;
    for(int i=0;i<5;i++){
        obj.result=0;
        obj.result = obj.arr[i]*obj.number;
        cout<<obj.result<<endl;
    }
    
}


int main(){
    Array obj;
    obj.getdata();
    multiply(obj);
    return 0;
}