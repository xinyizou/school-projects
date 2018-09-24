//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #2
// Filename: lab02_02c
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: projecting human population
// Purpose: to calculate human population, in billions, over time
//
// 1. Ask user for the year of prediction
// 2. Input this into the given equation
// 3. Output results to user
// 5. Terminate

#include <iostream>
#include <cmath>    //needed to include the exp() function
using namespace std;

int main()
{
    // INPUT: year
    // OUTPUT: projected population of Earth

    // VARIABLES: year, population

    // declare variables
    double pop; // to allow for decimal values in the population
    int year;

    // initialize value of current year
    cout << "What is the year of prediction? " << endl;
    cin >> year;

    pop = 6.0 * exp(0.02 * (year - 2000)); // use of exp() instead of pow() to avoid defining constant e, ensuring higher degree of accuracy
    cout << "In year " << year << ", the population on Earth is " << pop << " billion people" << endl; // output results to user

    // terminate
    return 0;
}

