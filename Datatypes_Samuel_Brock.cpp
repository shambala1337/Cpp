/*
    Sam Brock
    COSC-1436-57004
    CodeBlocks for Windows

    This program will convert user penny values to dollars, quarters,
    dimes, nickels and remaining pennies.
*/
#include <iostream>
using namespace std;
int main()
{

    const int dollar = 100, quarter = 25, dime = 10, nickel = 0, penny = 1;
    int userValue = 0, temp = 0, temp2 = 2;
    cout << "This program will convert penny values to dollars and change. \n";
    cout << "Please enter the amount of pennies you want to convert. \n";

    cin >> userValue ;

    	int num1 = 5;
int num2 = 3;
cout << "The result is " << (num1 * num2 + 10) << endl;

cout << "asdfasdfasdfasdfasdf a" <<endl;

    //DOLLARS
    temp = userValue/dollar; //calculates dollars
    cout << "Dollars " << temp << endl;
    temp2 = userValue%dollar; //calculates remainder
    userValue = temp2; // puts remainder in userValue


    //QUARTERS
    cout << "Quarters " << userValue/quarter << endl;
    temp = userValue%quarter;


    //DIMES
    /*temp = userValue/dime;
    temp2 = userValue%dime;
    userValue = temp2;*/
    cout << "Dimes " << userValue/dime << endl;

    //NICKELS
    temp = userValue/nickel;
    temp2 = userValue%nickel;
    userValue = temp2;
    cout << "Nickels " << temp2 << endl;


    //PENNIES
    temp = userValue/penny;
    temp2 = userValue%penny;
    userValue = temp2;
    cout << "Pennies " << temp << endl;

    cout << "Hellag";







    return 0;
}
