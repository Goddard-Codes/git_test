#include <iostream>
using namespace std;

int main() {
  short day, month, year, format;

  // Request day of the month (as a number) and put in day variable
  cout << "Enter a day of the month (1, 12, 30, etc): ";
  cin >> day;
  
  // convert to formatting (1 --> 01)
  string day1;
  if (day < 10) {
    day1 = "0" + to_string(day);
  }
  else {
    day1 = to_string(day);
  }
  
  // Request for the month number and read it in
  cout << "Enter the month of the year (1, 12, 9, etc): ";
  cin >> month;
  // Convert to formatting (2 --> 02)
  string month1;
  if (month < 10) {
    month1 = "0" + to_string(month);
  }
  else {
    month1 = to_string(month);
  }

  // Request for the year and read it in
  cout << "Enter the year (2007, 2025, etc): ";
  cin >> year;

  // Ask what format the user would like to see the date in
  cout << "Formats are (1) YYYY/MM/DD, (2) DD/MM/YYYY, and (3) MM/DD/YYYY" << endl;
  cout << "Enter the number for the format you want (1, 2, or 3): ";
  cin >> format;

  // Print the corresponding formatting
  if (format == 1) {
    cout << year << "/" << month1 << "/" << day1 << endl;
  }
  else if (format == 2) {
    cout << day1 << "/" << month1 << "/" << year << endl;
  }
  else if (format == 3) {
    cout << month1 << "/" << day1 << "/" << year << endl;
  }

} 