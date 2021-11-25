/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 David La Rosa
 */
using namespace std;

#include <iostream>

int main() {

    /*Finds if a number is odd or even*/

    int num;

    cout << "Insert a digit: ";

    cin >> num;

    if (num % 2 == 0)
        cout << num << " is even";

    else
        cout << num << " is odd";


    return 0;
}