/* Create a class Rational with two data members to represent numerator(p) and denominator(q). Use
object pointer to call member functions to read and display the object in p/q form.*/


#include <iostream>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;

public:
    void readRational() {
        cout << "Enter Numerator: ";
        cin >> numerator;
        cout << "Enter Denominator: ";
        cin >> denominator;
    }

    void displayRational() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Rational* rationalPtr = new Rational();

    rationalPtr->readRational();
    cout << "Rational Number: ";
    rationalPtr->displayRational();

    delete rationalPtr;

    return 0;
}
