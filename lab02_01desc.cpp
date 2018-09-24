//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1
// Filename: lab02_01d
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Weighing an object using a set of weights
// Purpose: determine the number of user-specified scale weights needed to weigh an object of user-specified heaviness
// Due date: Friday, September 21, 2018
//
// 1. Ask user for the weight of the object
// 2. Ask user for the number of scale weights they wish to use and create an array of that size
// 3. Ask user to input weight of scale weights, place this value into the array
// 4. Reorder the array values from largest to smallest
// 5. Create new array to store the number of each weight needed
// 6. Iteratively divide the remaining weight of the object with the largest possible weight and store whole number quotient values in new array
// 7. Reinitialize the remaining weight after each iteration to reflect remaining weight after calculations
// 8. Output results to user
// 9. Terminate

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
    // INPUT: weight of the object in pounds, number of weights used, weight of the weights
    // OUTPUT: number of each scale weight needed

    // VARIABLES: number of weights needed, weight of weights, and the weight of the object

    // user inputs weight of object
    cout << "What is the weight of the object?" << endl;
    int obj_weight;
    cin >> obj_weight;

    //user inputs number of scale weights
    cout << "How many scale weights do you wish to use?" << endl;
    int num_weights;
    cin >> num_weights;

    // creates an array "scale_weights" with the same number of values as the num_weights
    int scale_weights [num_weights];

    // places user input into an array

    cout << "Input the scale weights:" << endl;
    for (int z = 0; z < num_weights; z++)
    {
        cin >> scale_weights[z];
    }

    // use of sort() to rearrange scale_weights array from heaviest to lightest
    // code copied from Stack Overflow, original written by Armen Tsirunyan:
/*
#include <algorithm>
#include <functional>

int main()
{
   //...
   std::sort(array, array+n, std::greater<int>());
}
*/
    sort(scale_weights, scale_weights + num_weights, greater <int> ());

    // creation of new array to store the occurrence of each weight
    int x_weights [num_weights];

    // creation of variable rem_weight that stores the remaining value of the object weight after weights are used
    int rem_weight = obj_weight;

    // output results to user
    cout << "For an object that weighs " << obj_weight << " pounds, the following weights are needed: " << endl;

    for ( int a = 0; a < num_weights; a++)
    {
        x_weights[a] = rem_weight / scale_weights[a];     // inputs the number of each scale weight needed into the occurrence array
        rem_weight = rem_weight % scale_weights[a];       // re-initiate rem_weight to reflect remaining weight
        cout << x_weights[a] << " x " << scale_weights[a] << " pound weights" << endl;      // output results to user
    }

    return 0;
}
