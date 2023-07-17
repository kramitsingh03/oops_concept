/*Create a two text files personal.txt and professional.txt. Write personal details name, age and 
address and professional details job and salary in respective files. Read from files and display in a neat 
format.*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream obj;
    obj.open("personal.txt",ios::out);
    string name,address,job;
    int age;
    double salary;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>age;
    cout<<"Enter Address:";
    cin>>address;
    cout<<"Enter job:";
    cin>>job;
    cout<<"Enter Salary:";
    cin>>salary;
    obj<<name<<endl;
    obj<<age<<endl;
    obj<<address<<endl;
    obj.close();
    obj.open("professional.txt",ios::out);
    obj<<job<<endl;
    obj<<salary<<endl;
    obj.close();
    obj.open("personal.txt",ios::in);
    cout<<"--------------------------------\n";
    if (obj.is_open()) {
        string line;
        while (getline(obj, line)) {
            cout << line << endl;
        }
    }
        obj.close();
    obj.open("professional.txt",ios::in); 
    if (obj.is_open()) {
        string line;
        while (getline(obj, line)) {
            cout << line << endl;
        }
    }
        obj.close();
    return 0;
}