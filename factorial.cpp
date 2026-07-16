// Write a program to find the factorial value of any number
// entered through the keyboard. 

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }

    cout << "Fact of " << num << " = " << fact << endl;

    return 0;
}
