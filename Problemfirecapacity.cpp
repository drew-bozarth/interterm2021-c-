/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-07
Assignment 1 - firecapacity */

#include <iostream>
using namespace std;

int main() {
  
  int maxcap;
  int numPeople;
  int morePeople;
  int lessPeople;

  cout << "Please enter the Maximum Room Capacity";
  cout << endl;
  cin >> maxcap;
  cout << "Please enter the number of people planning to attend the meeting";
  cout << endl;
  cin >> numPeople;

  if(numPeople <= maxcap){
    cout << "It is legal to hold the meeting and ";
    morePeople = maxcap - numPeople;
    cout << morePeople;
    cout << " more people can attend.";
    cout << endl;
  }

  if(numPeople > maxcap){
    cout << "This meeting cannot be held due to fire regulations. ";
    lessPeople = numPeople - maxcap;
    cout << lessPeople;
    cout << " must leave in order to not go over the room's maximum capacity.";
    cout << endl;
  }

  return 0;
}
