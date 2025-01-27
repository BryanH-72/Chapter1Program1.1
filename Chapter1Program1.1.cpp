/* Program File Name: Chapter1Program1.1.cpp
Programmer: Bryan Hurley
Date:January 2025
Requirements: Write a program that has the following character variables: first, middle, and last. Store your initials in these
variables then display them on the screen.
*/
#include <iostream>
using namespace std;
int main()
{
    // Get the number of hours worked.
    double hours, rate, pay;
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    //Calculate pay
    pay = hours * rate;

    //Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
