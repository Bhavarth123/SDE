//A certain grade of steel is graded according to the following
//conditions:
//(i) Hardness must be greater than 50
//(ii) Carbon content must be less than 0.7
//(iii) Tensile strength must be greater than 5600
//The grades are as follows:
//Grade is 10 if all three conditions are met
//Grade is 9 if conditions (i) and (ii) are met
//Grade is 8 if conditions (ii) and (iii) are met
//Grade is 7 if conditions (i) and (iii) are met
//Grade is 6 if only one condition is met
//Grade is 5 if none of the conditions are met
//Write a program, which will require the user to give values of
//hardness, carbon content and tensile strength of the steel
//under consideration and output the grade of the steel. 

#include <iostream>
using namespace std;

int main()
{
    int hardness, tensile;
    float carbon;

    cout << "Enter Hardness: ";
    cin >> hardness;

    cout << "Enter Carbon Content: ";
    cin >> carbon;

    cout << "Enter Tensile Strength: ";
    cin >> tensile;

    int c1 = (hardness > 50);
    int c2 = (carbon < 0.7);
    int c3 = (tensile > 5600);

    if (c1 && c2 && c3)
        cout << "Grade = 10";
    else if (c1 && c2)
        cout << "Grade = 9";
    else if (c2 && c3)
        cout << "Grade = 8";
    else if (c1 && c3)
        cout << "Grade = 7";
    else if (c1 || c2 || c3)
        cout << "Grade = 6";
    else
        cout << "Grade = 5";

    return 0;
}
