/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-07
Assignment 1 - employeepay */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int hoursWorked;
  int extraHours;
  const int REGULAR_WAGE = 16.00;
  const int OVERTIME_WAGE = 24.00;
  double ssTax;
  double fedTax;
  double stateTax;
  const double MEDICAL_INSURANCE = 10.00;
  double grossPay;
  double netPay;

  cout << "Please enter your hours worked this week: ";
  cout << endl;
  cin >> hoursWorked;

  if(hoursWorked > 40){
    extraHours = hoursWorked - 40;
    grossPay = (40 * REGULAR_WAGE) + (extraHours * OVERTIME_WAGE);
  }

  if(hoursWorked <= 40){
    grossPay = hoursWorked * REGULAR_WAGE;
  }

  ssTax = grossPay * .06;
  fedTax = grossPay * .14;
  stateTax = grossPay * .05;

  netPay = grossPay - (ssTax + fedTax + stateTax + MEDICAL_INSURANCE);

  cout << "Your gross pay for the week was $";
  cout << fixed << setprecision (2) << grossPay << endl;
  cout << "$" << ssTax;
  cout << " was withheld for Social Security Tax." << endl;
  cout << "$" << fedTax;
  cout << " was withheld for Federal Income Tax." << endl;
  cout << "$" << stateTax;
  cout << " was withheld for State Income Tax." << endl;
  cout << "And $" << MEDICAL_INSURANCE << " was withheld for Medical Insurance.";
  cout << endl;
  cout << "After all of that, your net take-home pay for this week is $";
  cout << netPay << endl;

  return 0;
}
