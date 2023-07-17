/* Implement the following relation. Parent classes only have member functions. Calculate the area 
and perimeter of the Rectangle object and display*/
#include <iostream>
using namespace std;
class Area{
public:
void calarea(int l,int b){
    int area;
    area = l*b;
    cout<<"Area of Recctangle :"<<area<<endl;
}
};
class Perimeter{
public:
void calperimeter(int l,int b){
    int perimeter;
    perimeter = 2*(l+b);
    cout<<"Perimeter of rectangle :"<<perimeter<<endl;
}
};
class Rectangle : public Area, public Perimeter{
public:
int length,breadth;
void getdata(){
    cout<<"Enter length and breadth :"<<endl;
    cin>>length>>breadth;
    }
    void callfunction(){
        calarea(length,breadth);
        calperimeter(length,breadth);
    }
};
int main(){
    Rectangle r;
    r.getdata();
    r.callfunction();
    return 0;
}