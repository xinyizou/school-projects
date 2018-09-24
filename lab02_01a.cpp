//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #1
// Filename: lab02_01a

// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: weighing an object using a set of weights
// Purpose: determine the number of scale weights needed to weigh a 1048 pound object
// Due date: Friday, September 21, 2018
//
// 1. Assign given weight to variable
// 2. Create variables to store number of times each weight is used
// 3. Divide 1048 / 150, store integer quotient into variable
// 4. Divide 1048 % 150 / 50, store integer quotient into variable
// 5. Divide 1048 % 150 % 50 / 30, store integer quotient into variable
// 6. Divide 1048 % 150 % 50 % 30 /15, store integer quotient into variabl3
// 7. Divide 1048 % 150 % 50 % 30 % 15 / 1, store integer quotient into variable
// 8. Output results to user
// 9. Terminate

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
    // determine the number of each scale weight needed with heaviest weights taking priority and the remaining weight to lighter weights
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
