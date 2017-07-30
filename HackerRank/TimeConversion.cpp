#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string time;
    cin >> time;

    int hh = (time[0] - '0') * 10 + (time[1] - '0');
    int mm = (time[3] - '0') * 10 + (time[4] - '0');
    int ss = (time[6] - '0') * 10 + (time[7] - '0');

    if (time[8] == 'A' && hh == 12) hh =   0;
    if (time[8] == 'P' && hh  < 12) hh += 12;

    printf("%02d:%02d:%02d", hh, mm, ss);

    // if time is 12
   // if (time[0] == '1' && time[1] == '2' && !pm) {
   //     time[0] = '0';
   //     time[1] = '0';
   // }

   // if (pm && !(time[0] == '1' && time[1] == '2')) {
    //    time[1] += 2;
    //    time[0]++;
   // }

   // if (time[1] - '0' > 9) {
   //     time[1] -= 10;
   //     time[0]++;
   // }

   // time.erase(8,2);

    //cout << time << endl;
    return 0;
}
