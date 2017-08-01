#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; cin >> N;
    
    int people = 5;
    int shared = 0;
    int liked = 0;
    for (int i = 1; i <= N; i++) {
      shared = floor(people/2);
      liked += shared;
      people = shared * 3;
    }

    cout << liked << endl; 
    return 0;
}


