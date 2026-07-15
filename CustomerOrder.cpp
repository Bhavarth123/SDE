// The policy followed by a company to process customer orders
// is given by the following rules:
// (a) If a customer order is less than or equal to that in stock
// and has credit is OK, supply has requirement.
// (b) If has credit is not OK do not supply. Send him
// intimation.
// (c) If has credit is Ok but the item in stock is less than has
// order, supply what is in stock. Intimate to him data the
// balance will be shipped. 

#include <iostream>
using namespace std;

int main()
{
   int order, stock,credit;

    cout << "Enter order, stock and credit(Y/N): ";
    cin >> order >> stock >> credit;

    if (credit == 'N')
        cout << "Do not supply. Send intimation.";
    else if (order <= stock)
        cout << "Supply the order.";
    else
        cout << "Supply " << stock << " items. Balance will be shipped later.";
	return 0;
}
