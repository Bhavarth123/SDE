// Write a program to print out all Armstrong numbers between
// 1 and 500. If sum of cubes of each digit of the number is
// equal to the number itself, then the number is called an
// Armstrong number.

#include <iostream>
using namespace std;

int main()
{
    int num = 1, temp, digit, sum;

    cout << "numbers 1 and 500 are:\n";

    while (num <= 500)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == num)
        {
            cout << num << endl;
        }

        num++;
    }

    return 0;
}
