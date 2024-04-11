#include <iostream>
using namespace std;

// Q2 Write a function that takes the time as three integer arguments(hours, minutes and seconds) and returns the number of seconds since the last time the clock "stuck 12". Use this function to calculate the amount of time in seconds between two times, both of which are within one 12-hour cycle of the clock. Eg: if user enters 3,12,39, the output is 11559.


int time(int hour, int mins, int sec){
int seconds {0}; 

seconds = hour*3600;
seconds = seconds + (mins*60);
  seconds = seconds +
  

  return seconds;
}





int main() {
  
  int hours{0};
  int mins{0};
  int sec{0};
  int grab{0};

  cout << "What time is it? (Enter hour, not in military time): ";
  cin >> hours;
  cout << "What time is it? (Enter minutes): ";
  cin >> mins;
  cout << "What time is it? (Enter seconds): ";
  cin >> sec;

//grab = time(hours, mins, sec);
  
  cout << "The total time that has passed since the clock hit 12 is: " << grab << " seconds"; 
  
}
