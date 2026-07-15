// A library charges a fine for every book returned late. For first
// 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
// above 10 days fine is 5 rupees. If you return the book after 30
// days your membership will be cancelled. Write a program to
// accept the number of days the member is late to return the
// book and display the fine or the appropriate message. 

#include <iostream>
using namespace std;

int main()
{
    int days;

    cout << "Enter number of late days: ";
    cin >> days;

    if (days <= 5)
        cout << "Fine = 50 paise";
    else if (days <= 10)
        cout << "Fine = Rs. 1";
    else if (days <= 30)
        cout << "Fine = Rs. 5";
    else
        cout << "Membership Cancelled";

    return 0;
}
