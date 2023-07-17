/* Implement the following relation, calculate the salary of faculty and office staff and display all 
details. Salary of faculty =1000*hrs worked Salary of office staff =500*hrs worked. */
#include <iostream>
using namespace std;
class Employee{ 
    public:
    string name;
    int empid;
    int hrs;
    double salary;  
};
class Faculty : public Employee{
public:
void getfaculty(){
    cout<<"Enter Faculty Name :";
    cin>>name;
    cout<<"Enter Faculty ID :";
    cin>>empid;
    cout<<"Enter total hours :";
    cin>>hrs;
}
void calcfaculty(){
salary = 1000 * hrs;

}
void putfaculty(){
    cout<<"Faculty Name :"<<name<<endl;
    cout<<"Faculty ID :"<<empid<<endl;
    cout<<"Faculty Salary :"<<salary<<endl;

}
};
class Staff : public Employee{
public:
void getstaff(){
    cout<<"Enter Staff Name :";
    cin>>name;
    cout<<"Enter Staff ID :";
    cin>>empid;
    cout<<"Enter total hours :";
    cin>>hrs;
}
void calcstaff(){
salary = 500*hrs;
}
void putstaff(){
    cout<<"Staff Name :"<<name<<endl;
    cout<<"Staff ID :"<<empid<<endl;
    cout<<"Staff Salary :"<<salary<<endl;

}
};
int main(){
    Faculty f;
    f.getfaculty();
    f.calcfaculty();
    f.putfaculty();
    Staff s;
    s.getstaff();
    s.calcstaff();
    s.putstaff();
    return 0;
}