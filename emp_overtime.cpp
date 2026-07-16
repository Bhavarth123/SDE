// while loops
// Write a program to calculate overtime pay of 10 employees.
// Overtime is paid at the rate of Rs. 12.00 per hour for every
// hour worked above 40 hours. Assume that employees do not
// work for fractional part of an hour. 
// 


#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int hours, overtimeHours,overtimePay;
    

    while (i <= 10)
    {
        cout << "Enter hours worked by Employee " << i << ": ";
        cin >> hours;

        if (hours > 40)
        {
            overtimeHours = hours - 40;
            overtimePay = overtimeHours * 12.0;
        }
        else
        {
            overtimeHours = 0;
            overtimePay = 0;
        }

        cout << "Overtime Hours = " << overtimeHours << endl;
        cout << "Overtime Rs = " << overtimePay << endl;

        i++;
    }

    return 0;
}
