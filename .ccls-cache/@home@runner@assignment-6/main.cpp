#include <iostream>
using namespace std;
// Q1 Write a function that displays at the left margin of the screen a solid square of asterisks whose side is specified in integer parameter side. For example, if side is 4, the function displays
// ****
// ****
// ****
// ****

// Q2 Write a function that takes the time as three integer arguments(hours, minutes and seconds) and returns the number of seconds since the last time the clock "stuck 12". Use this function to calculate the amount of time in seconds between two times, both of which are within one 12-hour cycle of the clock. Eg: if user enters 3,12,39, the output is 11559.


void asterisks(int num) { //function. void bc no return
    int count{0};
    int count2{0};
  // a while within a while
  //Works bc each count2 is a new instance so count resets

    // Iterate through rows
    while (count2 < num) {
        // Iterate through columns
        count = 0;
        while (count < num) {
            std::cout << "* ";
            count++; 
        }
        std::cout << std::endl;
        count2++;
    }
}

int main() {
    int num{0};

    std::cout << "Enter the side length of the square: ";
    std::cin >> num;

    asterisks(num); //call function

    return 0;
}
