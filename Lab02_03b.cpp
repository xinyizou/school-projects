//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #3
// Filename: lab02_03b
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: computing sum
// Purpose: computing sum of numbers from user-inputted range
// Due date: Friday, September 21, 2018
//
// 1. Declare variables needed: first value, last value, sum, number of integers, and constant interval of 1
// 2. Initialize first number and last number with user inputted values
// 3. Initialize sum and number of integers using with given formula
// 4. Output results to user
// 5. Terminate

#include <iostream>
using namespace std;

int main()
{
    // INPUT: user inputs starting number, ending number, and interval
    // OUTPUT: sum of numbers from starting number to ending number

    // calculate as per the formula: sum = (n / 2) * (2 * a + (n - 1) * d
    // where n is number of integers to be added, a is the first number, and d is the difference between each number

    // declare variables
    int first_num;
    int last_num;
    const int INTERVAL = 1;
    int sum;
    double num_of_int;      // must be double to accommodate cases where num_of_int / 2 is not a whole number since int / int will return an integer value that will cut off decimal values

    // ask user for input and initialize variables
    cout << "Enter the starting value: " << endl;
    cin >> first_num;

    cout << "Enter the ending value: " << endl;
    cin >> last_num;

    // initialize variable with a formula
    num_of_int = last_num - first_num + 1;
    sum = (num_of_int / 2) * (2 * first_num + (num_of_int - 1) * INTERVAL);

    // output result to user
    cout << "The sum of " << first_num << " to " << last_num << " is " << sum << endl;

    // terminate
    return 0;
}
