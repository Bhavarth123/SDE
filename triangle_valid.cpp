// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// valid or not. The triangle is valid if the sum of two sides is
// greater than the largest of the three sides. 


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a))
        cout << "Triangle is Valid";
    else
        cout << "Triangle is Not Valid";

    return 0;
}
