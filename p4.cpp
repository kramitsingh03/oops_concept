/*Create a class Date with data members month, date and year. Create a Date object and find the
previous date by overloading unary operator*/
#include <iostream>
using namespace std;
class Date
{
    int date, month, year;

public:
    void getdata()
    {
        cout << "Enter date month year (dd/mm/yyyy):" << endl;
        cin >> date >> month >> year;
    }
    Date operator-()
    {
        Date d;
        if (date == 1)
        {
            d.date = 31;
            d.month = month - 1;
            d.year = year;
            if (date == 1 && month == 1)
            {
                d.date = 31;
                d.month = 12;
                d.year = year - 1;
            }
            else if (month % 2 == 0)
            {
                d.date = 30;
                d.month = month - 1;
                d.year = year;
            }
            else if (month == 3) // february month
            {

                if (year % 4 == 0)  // february leap year
                {
                    d.date = 29;
                    d.month = month - 1;
                    d.year = year;
                }
                else
                {
                    d.date = 28;
                    d.month = month - 1;
                    d.year = year;
                }
            }
            else if (month == 8) // august month
            {
                d.date = 31;
                d.month = month - 1;
                d.year = year;
            }
        }
        else
        {
            d.date = date - 1;
            d.month = month;
            d.year = year;
        }
        return d;
    }
    void putdata()
    {
        cout << "Date :" << date << " / " << month << " / " << year << endl;
    }
};
int main()
{
    Date obj, obj1;
    obj.getdata();
    obj1 = -obj;
    obj1.putdata();
    return 0;
}