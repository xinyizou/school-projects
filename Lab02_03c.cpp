//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #3
// Filename: lab02_03c
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: calculating sum of consecutive numbers
// Purpose: verifying the correctness of programs created by comparing program results with manual computation
// Due date: Friday, September 21, 2018


// Evaluation of program
//
// First number: 1
// Last number: 100
// Program output: The sum of 1 to 100 is 5050
// Manual calculation: (100 / 2) * (2 * 1 + (100 - 1) * 1) = 5050
//
// First number: 1
// Last number: 3000
// Program output: The sum of 1 to 3000 is 4501500
// Manual calculation: (3000 / 2) * (2 * 1 + (3000 - 1) * 1) = 4501500
//
// First number: 5
// Last number: 10000
// Program output: The sum of 1 to 10000 is 50004990
// Manual calculation: (9996 / 2) * (2 * 5 + (9996 - 1) * 1) = 50004990
//
//
// Since the program's outputted values and manually calculated values are the same, the program is correct


#include <iostream>
using namespace std;

int main()
{
    // INPUT: finite arithmetic series defined by starting number, ending number, and interval
    // OUTPUT: sum of arithmetic series

    // calculate as per the formula: sum = (n / 2) * (2 * a + (n - 1) * d
    // where n is number of integers to be added, a is the first number, and d is the difference between each number

    // declare variables
    int first_num;
    int last_num;
    const int INTERVAL = 1;
    int sum;
    double num_of_int;      // must be double to accommodate cases where num_of_int / 2 is not a whole number since int / int will return an integer value that will cut off decimal values

    //initialize variables with appropriate values given in the question
    first_num = 1;
    last_num = 100;

    // calculate variable value using given formulas
    num_of_int = last_num - first_num + 1;
    sum = (num_of_int / 2) * (2 * first_num + (num_of_int - 1) * INTERVAL);

    // output result to user
    cout << "The sum of " << first_num << " to " << last_num << " is " << sum << endl;

    // repeat with each consequent arithmetic series

    first_num = 1;
    last_num = 3000;
    num_of_int = last_num - first_num + 1;
    sum = (num_of_int / 2) * (2 * first_num + (num_of_int - 1) * INTERVAL);
    cout << "The sum of " << first_num << " to " << last_num << " is " << sum << endl;

    first_num = 5;
    last_num = 10000;
    num_of_int = last_num - first_num + 1;
    sum = (num_of_int / 2) * (2 * first_num + (num_of_int - 1) * INTERVAL);
    cout << "The sum of " << first_num << " to " << last_num << " is " << sum << endl;

    //terminate
    return 0;
}


// Limits
// The input limits for this function are the limits of the int variable
// As previously determined, an integer can take any value between (but not
// including) -2147483649 and 2147483647
//
// Example:
// First number: -2147483648
// Last number: 2147483649
// Program output: The sum of -2147483648 to 2147483647 is 0
// Manual calculation: (4294967298 / 2) * (2 * -2147483648 + (4294967298 - 1) * 1) = -2147483649
//
// This error in calculation can be attributed to the overloading of the variables,
// as seen, the values initiated into the variable is not fully outputted (2147483649 became 2147483647)
// nor is the final sum correct.
//
// Therefore, when any of the inputted values exceeds the allowable limit for the
// integer variable, the program is not correct.
//
// Similarly, since the value of the resulting sum is also stored in an integer its
// value must also be between (but not including) -2147483649 and 2147483647
//
// Example:
// First number: -2147483647
// Last number: -2147483646
// Program output: The sum of -2147483647 to -2147483646 with an interval of 1 is 3
// Manual calculation: (2 / 2) * (2 * -2147483647 + (2 - 1) * 1) = -4294967293
//
// Once the sum has exceeded the limits of the int variable, the program is no longer correct.
//
// This also makes sense given the expressible limit of an integer variable is -2147483648 to 2147483647 [1]
// Source [1]: corob-msft. 2016. "Data Type Ranges | Microsoft Doc". Available from
// https://github.com/mozillascience/code-research-object/issues/12
//
//
// Decimals
//
// First number: 42.42
// Last number: 84.42
// Program output: The sum of 42 to 84 with an interval of 1 is 2646
//
// As seen above, when a non-integer value is inputted into the int variable, the
// decimal values are cut off to make an integer, meaning the program is incorrect. This could be corrected by changing the variable type to from int to double.
//
//
// Therefore, this program is only correct when all integer variables (inputs and outputs) have an integer value between (but not including) -2147483649 and 2147483647.

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
