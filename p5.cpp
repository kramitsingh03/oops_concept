/* Implement the following relation. Find the grade and display all details of a student.*/
#include<iostream>
using namespace std;
class Student{
public:
string name;
int reg;
string department ;
void getdata(){
    cout<<"Enter Name :"<<endl;
    cin>>name;
    cout<<"Enter Registration Number :"<<endl;
    cin>>reg;
    cout<<"Enter Department :"<<endl;
    cin>>department;
}
void putdata(){
    cout<<"------------------------------------"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Registration number :"<<reg<<endl;
    cout<<"Department :"<<department<<endl;
}
};
class Marks : public Student{
    public:
    int m1,m2,m3,m4,m5;
    int total;
    void getmarks(){
        cout<<"Enter Marks :"<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    int totalmarks(){
        total=m1+m2+m3+m4+m5;
        return total;
    }
    void putmarks(){
        cout<<"Marks : "<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl;
        cout<<"Total Marks :"<<total<<endl;
    }
};
class Result : public Marks{ 
    public:
    char grade;
    void gradecalc(){
    if (total>450){
        cout<<"Grade : S"<<endl;
    }
    else if (total>400){
        cout<<"Grade : A"<<endl;
    }
    else if (total>350){
        cout<<"Grade : B"<<endl;
    }
    else if (total>300){
        cout<<"Grade : c"<<endl;
    }
    else{
        cout<<"Grade : F"<<endl;
    }
    }
};
int main(){
    Result s;
    s.getdata();
    s.getmarks();
    s.putdata();
    s.totalmarks();
    s.putmarks();
    s.gradecalc();
    return 0;

}