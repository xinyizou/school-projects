//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #2
// Filename: lab02_02b
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Projecting human population
// Purpose: verifying the correctness of programs created by comparing program results with manual computation
// Due date: Friday, September 21, 2018


// Evaluation of program
// Manual calculation to 6 significant digits
//
// Year = 2018
// Program output: In year 2018, the population on Earth is 8.59998 billion people
// Manual calculation: 6.0 * e ^ 0.02 (2018 - 2000) = 8.59998
//
// Year = 2025
// Program output: In year 2025, the population on Earth is 9.89233 billion people
// Manual calculation : 6.0 * e ^ 0.02 (2025 - 2000) = 9.89233
//
// Year = 2050
// Program output: In year 2050, the population on Earth is 16.3097 billion people
// Manual calculation: 6.0 * e ^ 0.02 (2050 - 2000) = 16.3097
//
// Year = 2100
// Program output: In year 2100, the population on Earth is 44.3343 billion people
// Manual calculation: 6.0 * e ^ 0.02 (2100 - 2000) = 44.3343
//
//
// Since the program's outputted values and manually calculated values are the same, the program is correct


// Limits
// Using incremental guess and check, it is determined that once the year number is too large or too small, the population outputs as inf or respectively
//
// When year = 37399
// Program output: In year 37399, the population on Earth is 1.77811e+308 billion people
//
// When year = 37400
// Program output: In year 37400, the population on Earth is inf billion people
//
// When year = -35256
// Program output: In year -35256, the population on Earth is 2.96439e-323 billion people
//
// When year = -35257
// Program output: In year -35257, the population on Earth is 0 billion people
//
// Therefore the range of possible year values for which the population can still be computed correctly is between (but not including) -35257 and 37400.
// This also makes sense given the expressible limit of a double variable is 1.7E+/-308 [1]
// Source [1]: corob-msft. 2016. "Data Type Ranges | Microsoft Doc". Available from https://github.com/mozillascience/code-research-object/issues/12


#include <iostream>
#include <cmath>    //needed to include the exp() function
using namespace std;

int main()
{
    // INPUT: current year
    // OUTPUT: projected population of Earth

    // VARIABLES: The current year and the final population

    // declare variables
    double pop; // to allow for decimal values in the population
    int current_year;

    // initialize variables to given values and formulas
    current_year = 2018;
    pop = 6.0 * exp(0.02 * (current_year - 2000)); // use of exp() instead of pow() to avoid defining constant e, ensuring higher degree of accuracy
    cout << "In year " << current_year << ", the population on Earth is " << pop << " billion people" << endl; // output results to user

    // repeat with each subsequent year

    current_year = 2025;
    pop = 6.0 * exp(0.02 * (current_year - 2000));
    cout << "In year " << current_year << ", the population on Earth is " << pop << " billion people" << endl;

    current_year = 2050;
    pop = 6.0 * exp(0.02 * (current_year - 2000));
    cout << "In year " << current_year << ", the population on Earth is " << pop << " billion people" << endl;

    current_year = 2100;
    pop = 6.0 * exp(0.02 * (current_year - 2000));
    cout << "In year " << current_year << ", the population on Earth is " << pop << " billion people" << endl;

    // terminate
    return 0;
}
