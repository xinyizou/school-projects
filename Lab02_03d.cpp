//
// Student name: Xinyi Zou
// Student number: 20765197
//
// SYDE 121 Lab: Lab Assignment #1 Exercise #3
// Filename: lab02_02d
//
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: calculating sum of consecutive numbers in a series
// Purpose: to calculate the sum of any series
// Due date: Friday, September 21, 2018
//
// 1. Ask user the type of series they are finding the sum for.
// 2. If arithmetic, ask user for starting number, ending number, and interval, initialize into appropriate variables
// 3. If geometric, ask user if finite or infinite series
// 4. If infinite geometric series, ask for first number and common ratio (where |r| > 1) and calculate with appropriate formula
// 5. If finite geometric series, ask for first number, common ratio, and the number of terms in the series and calculate with appropriate formula
// 6. Output results to user
// 7. Terminate


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // INPUT: choice of arithmetic or geometric series, series defined by starting number, ending number, and interval/difference
    // OUTPUT: sum of series

    // ask user the type of series they wish to find the sum of
    char series_type;       // set an identifier, using a character reduces possible user error
    cout << "Is the series arithmetic or geometric? (Enter exactly as 'A' for arithmetic or 'G' for geometric) " << endl;
    cin >> series_type;

    if (series_type == 'A')     // code for when the series is arithmetic
    {
       // declare variables using double to accomodate non-integer values
       double a_first_num;
       double a_last_num;
       double a_interval;
       double a_sum;
       double a_num_of_int;

       // ask user for input and initialize variables
       cout << "Enter the starting value: " << endl;
       cin >> a_first_num;

       cout << "Enter the ending value: " << endl;
       cin >> a_last_num;

       cout << "Enter the interval value: " << endl;
       cin >> a_interval;

       // initialize variable with appropriate formulas
       a_num_of_int = a_last_num - a_first_num + 1;
       a_sum = (a_num_of_int / 2) * (2 * a_first_num + (a_num_of_int - 1) * a_interval);

       // output result to user
       cout << "The sum of " << a_first_num << " to " << a_last_num << " with an interval of " << a_interval << " is " << a_sum << endl;

       goto end;        // to terminate the program
    }

    if (series_type == 'G')     // code for when the series is geometric
    {
       char geometric_type;
       cout << "Is the series infinite or finite? (Enter exactly as 'I' for infinite or 'F' for finite) " << endl;
       cin >> geometric_type;

       if (geometric_type == 'F')       // code for when the series is finite
       {
           // ask user for input and initialize variables
           double f_first_num;
           double f_common_ratio;
           double f_number_of_terms;
           double f_sum;

           cout << "Enter the starting value: " << endl;
           cin >> f_first_num;

           cout << "Enter the common ratio: " << endl;
           cin >> f_common_ratio;

           cout << "Enter the number of terms: " << endl;
           cin >> f_number_of_terms;

           // initialize variable with appropriate formula
           f_sum = f_first_num * ((1 - pow(f_common_ratio, f_number_of_terms) )/ (1 - f_common_ratio));

           // output result to user
           cout << "This finite geometric series has a sum of " << f_sum << endl;

           goto end;        // to terminate the program
       }

       if (geometric_type == 'I')       // code for when the series is infinite
       {
           // ask user for input and initialize variables
           double i_first_num;
           double i_common_ratio;
           double i_sum;

           cout << "Enter the starting value: " << endl;
           cin >> i_first_num;

           cout << "Enter the common ratio: " << endl;
           cin >> i_common_ratio;

           if (i_common_ratio >= 1 || i_common_ratio <= -1)     // code for when the infinite series has an infinite sum
           {
               cout << "This infinite series does not have a definite sum." << endl;
               goto end;        // to terminate the program
           }

           // initialize variable with appropriate formula
           i_sum = i_first_num / (1 - i_common_ratio);

           // output result to user
           cout << "This infinite geometric series has a sum of " << i_sum << endl;

           goto end;        // to terminate the program
       }

       //terminate
       end:
       return 0;
    }
}
