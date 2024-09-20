/*
Tite Chapter 2 Exercise 7 - Ocean levels
File name:Chapter2Exe7_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 09/20/2024
Requirements: 
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles Driven/Gallons of Gas Used
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of gallons and the miles driven.
*/

#include <iostream>
using namespace std;
int main()
{
    int gallons;
    int miles;
    double mpg;
    cout << "How many miles have you driven?";
    cin >> miles;
    cout << "How many galons of gas have you used?";
    cin >> gallons;
    mpg = miles / gallons;

    cout << "Your MPG rate is: " << mpg << " miles per gallon";

}

