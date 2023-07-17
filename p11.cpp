/*Create a class Product with data members product name and price. Create an object and write 
the object into a binary file, read from the file and display*/
#include<iostream>
#include<fstream>
using namespace std;
class Product{
    public:
    string name;
    int price;
    void input(){
        cout<<"Enter Product name :";
        cin>>name;
        cout<<"Enter Price :";
        cin>>price;
    }
    void display(){
        cout<<"product :"<<name<<endl;
        cout<<"price :"<<price<<endl;
    }
};
int main(){
    Product obj;
    obj.input();
    fstream fs;
    fs.open("binary.txt",ios::out);
    fs.write((char*)&obj,sizeof(obj));
    fs.close();
    fs.open("binary.txt",ios::in);
    fs.read((char*)&obj, sizeof(obj));
    obj.display();
    fs.close();
    return 0;
}