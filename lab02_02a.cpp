//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #2
// Filename: lab02_02a
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: projecting human population
// Purpose: to calculate human population, in billions, over time
//
// 1. Initialize year as separate variable
// 2. Input this into the given equation
// 3. Output results to user
// 4. Repeat with each year
// 5. Terminate

#include <iostream>
#include <cmath>    //needed to include the exp() to calculate for e^x
using namespace std;

int main()
{
    // INPUT: year
    // OUTPUT: projected population of Earth

    // VARIABLES: The year and the population

    // declare variables
    double pop; // to allow for decimal values in the population
    int year;

    // initialize variables to given values and formulas
    year = 2018;
    pop = 6.0 * exp(0.02 * (year - 2000)); // use of exp() instead of pow() to avoid defining constant e, ensuring higher degree of accuracy
    cout << "In year " << year << ", the population on Earth is " << pop << " billion people" << endl; // output results to user

    // repeat with each subsequent year

    year = 2025;
    pop = 6.0 * exp(0.02 * (year - 2000));
    cout << "In year " << year << ", the population on Earth is " << pop << " billion people" << endl;

    year = 2050;
    pop = 6.0 * exp(0.02 * (year - 2000));
    cout << "In year " << year << ", the population on Earth is " << pop << " billion people" << endl;

    year = 2100;
    pop = 6.0 * exp(0.02 * (year - 2000));
    cout << "In year " << year << ", the population on Earth is " << pop << " billion people" << endl;

    // terminate
    return 0;
}


