#include <bits/stdc++.h>

using namespace std;

bool LeapYearGreg(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
  return false;
}

string solve(int year){
    string date = "";

    // transition
    if (year == 1918) date += "26.09.";

    // julian calendar
    else {
      if (year < 1918 && year % 4 == 0) date += "12.09.";
      else if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) date += "12.09.";
      else date += "13.09.";
    }

    date += to_string(year);
    return date;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
