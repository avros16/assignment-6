#include <iostream>
using namespace std;

// Q2 Write a function that takes the time as three integer arguments(hours, minutes and seconds) and returns the number of seconds since the last time the clock "stuck 12". Use this function to calculate the amount of time in seconds between two times, both of which are within one 12-hour cycle of the clock. Eg: if user enters 3,12,39, the output is 11559.

//function will do the math
int time(int hour, int mins, int sec){ //taking in  hour, mins and secs
int seconds {0}; //will hold seconds

seconds = hour*3600; //math for hour. 3,600 seconds in one hour
seconds = seconds + (mins*60);//math for mins
seconds = seconds + sec; //math for seconds
  

  return seconds;
}



int main() {
  
  int hours{0};
  int mins{0};
  int sec{0};
  int grab{0}; //grab and store value from function

  // get values from user
  
  cout << "What time is it? (Enter hour, not in military time): "; //not in military time ensures the "since 12" requirement
  cin >> hours;
  cout << "What time is it? (Enter minutes): ";
  cin >> mins;
  cout << "What time is it? (Enter seconds): ";
  cin >> sec;

grab = time(hours, mins, sec); //calling function, passing in parameters, storing value in grab
  
  cout << "The total time that has passed since the clock hit 12 is: " << grab << " seconds"; 
  
}
