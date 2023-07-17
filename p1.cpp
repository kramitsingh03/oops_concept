/* a. Create a class Number with an integer data member. Find the cube the number using friend 
function*/

#include<iostream>
using namespace std;
class Number{
    int a,result;
    public:
    void getdata(){
        cout<<"Enter Number :"<<endl;
        cin>>a;
    }
    friend int cube(Number &obj1){
      obj1.result = obj1.a*obj1.a*obj1.a;
      return obj1.result;
    }
    void putdata(){
        cout<<"Cube :"<<result<<endl;
    }
};
int main(){
    Number obj;
    obj.getdata();
    cube(obj);
    obj.putdata();
    return 0;
}

