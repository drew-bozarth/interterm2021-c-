/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-07
Assignment 1 - cereal */

#include <iostream>
using namespace std;

int main (){

  double metricTon = 35273.92;
  double cerealWeight;
  double cerealInTons;
  double numOfBoxes;

  cout << "Please enter in the weight of the cereal box in ounces.";
  cout << endl;
  cin >> cerealWeight;

  cerealInTons = cerealWeight / metricTon;
  cout << "The cereal's weight is ";
  cout << cerealInTons << " Metric Tons." << endl;

  numOfBoxes = metricTon / cerealWeight;
  cout << "You would need ";
  cout << numOfBoxes;
  cout << " boxes of cereal to yield one Metric Ton of cereal." << endl;

  return 0;
}
