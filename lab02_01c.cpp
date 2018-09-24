//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #1
// Filename: lab02_01c
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Weighing an object using a set of weights
// Purpose: verifying the correctness of programs created by comparing program results with manual computation
// Due date: Friday, September 21, 2018


// Evaluation of program
//
// When weight = 1048
// Program output: For an object that weighs 1048 pounds: 6 x 150 pound weights, 2 x 50 pound weights, 1 x 30 pound weights, 1 x 15 pound weights, and 3 x 1 pound weights are needed.
// Manual calculation: 1048 pounds = 6 * 150 pounds + 2 * 50 pounds + 1 * 30 pounds + 1 * 15 pounds + 3 * 1 pounds
//
// When weight = 2018
// Program output: For an object that weighs 2018 pounds: 13 x 150 pound weights, 1 x 50 pound weights, 0 x 30 pound weights, 1 x 15 pound weights, and 3 x 1 pound weights are needed.
// Manual calculation: 2018 pounds = 13 * 150 pounds + 1 * 50 pounds + 1 * 15 pounds + 3 * 1 pounds
//
// When weight = 13
// Program output: For an object that weighs 13 pounds: 0 x 150 pound weights, 0 x 50 pound weights, 0 x 30 pound weights, 0 x 15 pound weights, and 13 x 1 pound weights are needed.
// Manual calculation: 13 pounds = 13 * 1 pounds
//
// When weight = 2147483646
// Program output: For an object that weighs 2147483646 pounds: 14316557 x 150 pound weights, 1 x 50 pound weights, 1 x 30 pound weights, 1 x 15 pound weights, and 1 x 1 pound weights are needed.
// Manual calculation: 2147483647 pounds = 14316557 * 150 pounds + 1 * 50 pounds + 3 * 15 pounds + 1 * 1 pounds
//
// When weight = -2147483647
// Program output: For an object that weighs -2147483647 pounds: -14316557 x 150 pound weights, -1 x 50 pound weights, -1 x 30 pound weights, -1 x 15 pound weights, and -2 x 1 pound weights are needed.
// Manual calculation: -2147483647 pounds = -14316557 * 150 pounds + (-1) * 50 pounds + (-3) * 15 pounds + (-2) * 1 pounds
//
// When weight = -2147483648
// Program output: For an object that weighs -2147483647 pounds: -14316557 x 150 pound weights, -1 x 50 pound weights, -1 x 30 pound weights, -1 x 15 pound weights, and -3 x 1 pound weights are needed.
// Manual calculation: -2147483647 pounds = -14316557 * 150 pounds + (-1) * 50 pounds + (-3) * 15 pounds + (-3) * 1 pounds
//
//
// Since the program's outputted values and manually calculated values are the same, the program is correct

#include <iostream>
using namespace std;

int main()
{
    // INPUT: weight of the object in pounds, in this case 1048
    // OUTPUT: number of each scale weight needed

    // VARIABLES: number of 150, 50, 30, 15, and 1 pound weights needed and the weight of the object

    // asaign the given value of 1048 pounds to a variable
    int weight_given = 1048;

    // declare and initialize variables for the number of each scale weight needed
    // determine the number of each scale weight needed with heaviest weights taking priority
    int weights150 = weight_given / 150;
    int weights50 = weight_given % 150 / 50;
    int weights30 = weight_given % 50 / 30;         // since 150 is a multiple of 50, anything that is divisible by 50 is also divisible by 50
    int weights15 = weight_given % 50 % 30 / 15;    // since 50 is not a multiple of 30, both must be included here
    int weights1= weight_given % 50 % 15;           // since 30 is a multiple of 15, anything that is divisible by 15 is also divisible by 30, however since 15 and 50 are not multiples both must be included

    // output results to user
    cout << "For an object that weighs " << weight_given << " pounds: " << weights150 << " x 150 pound weights, " << weights50 << " x 50 pound weights, " << weights30 << " x 30 pound weights, "
    << weights15 << " x 15 pound weights, and " << weights1 << " x 1 pound weights are needed." << endl;

    //terminate
    return 0;
}



// Limits
//
// When weight = 2147483647
// Program output: No output
// Manual calculation: 2147483647 pounds = 14316557 * 150 pounds + 1 * 50 pounds + 3 * 15 pounds + 2 * 1 pounds
// Since the program worked for 214748646 the upper limit of this program is 2147483647.
//
// When weight = -2147483649
// Program output: No output
// Manual calculation: -2147483649 pounds = -14316557 * 150 pounds + (-1) * 50 pounds + (-3) * 15 pounds + (-4) * 1 pounds
// Since the program worked for -214748648 the lower limit of this program is -2147483649
//
// This program is only accurate when the weight is between -2147483649 and 2147483647.
//
// This also makes sense given the expressible limit of an integer variable is -2147483648 to 2147483647 [1]
// Source [1]: corob-msft. 2016. "Data Type Ranges | Microsoft Doc". Available from
// https://github.com/mozillascience/code-research-object/issues/12
//
// Decimals
//
// When weight = 42.42
// Program output: For an object that weighs 42 pounds: 0 x 150 pound weights, 0 x 50 pound weights, 1 x 30 pound weights, 0 x 15 pound weights, and 12 x 1 pound weights are needed.
// Manual calculation: 42.42 pounds = 0 * 150 pounds + 0 * 50 pounds + 2 * 15 pounds + 12 * 1 pounds + 0.42 pounds remainder
//
// When weight = 42.84
// Program output: For an object that weighs 42 pounds: 0 x 150 pound weights, 0 x 50 pound weights, 1 x 30 pound weights, 0 x 15 pound weights, and 12 x 1 pound weights are needed.
// Manual calculation: 42.84 pounds = 0 * 150 pounds + 0 * 50 pounds + 2 * 15 pounds + 12 * 1 pounds + 0.84 pounds remainder
//
// As seen above, when a non-integer value is inputted into the int variable, the decimal values are cut off to make an integer, meaning the program is incorrect.
//
//
// Therefore, this program is only correct when the user inputs a weight that is an integer values between (but not including) -2147483649 and 2147483647.

#include <iostream>
using namespace std;

int main()
{
    // INPUT: weight of the object in pounds, by user
    // OUTPUT: number of each scale weight needed

    // VARIABLES: number of 150, 50, 30, 15, and 1 pound weights needed and the weight of the object

    // declare variable for weight of object
    int weight_given;

    //ask user for weight and initialize variable
    cout << "What is the weight of the object in pounds?" << endl;
    cin >> weight_given;

    // declare and initialize variables for the number of each scale weight needed
    // determine the number of each scale weight needed with heaviest weights taking priority
    int weights150 = weight_given / 150;
    int weights50 = weight_given % 150 / 50;        // since 150 is a multiple of 50, anything that is divisible by 50 is also divisible by 50
    int weights30 = weight_given % 50 / 30;         // since 50 is not a multiple of 30, both must be included here
    int weights15 = weight_given % 50 % 30 / 15;    // since 30 is a multiple of 15, anything that is divisible by 15 is also divisible by 30, however since 15 and 50 are not multiples both must be included
    int weights1= weight_given % 50 % 15;

    //output results to user
    cout << "For an object that weighs " << weight_given << " pounds: " << weights150 << " x 150 pound weights, " << weights50 << " x 50 pound weights, " << weights30 << " x 30 pound weights, "
    << weights15 << " x 15 pound weights, and " << weights1 << " x 1 pound weights are needed." << endl;

    //terminate
    return 0;
}
