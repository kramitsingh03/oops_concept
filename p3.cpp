/*Write a program to add two complex numbers by overloading operator +*/
#include <iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    void getdata(){
        cout<<"Enter real number :";
        cin>>real;
        cout<<"Enter img number :";
        cin>>img;
    }
    Complex operator + (Complex obj2){
        Complex obj;
        obj.real = real + obj2.real;
        obj.img = img + obj2.img;
        return obj;
    }
    void putdata(){
        cout<<"Complex number are :"<<real <<" + "<<img<<"i"<<endl;
    }
    
};
int main(){
    Complex obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3 = obj1 + obj2;
    obj3.putdata();
    return 0;
}