#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    set<string> contacts;

    string instruction;
    string name;
    string partial;
    for (int i = 0; i < n; i++) {
        cin >> instruction;
        if (instruction == "add") {
            // add name into map
            cin >> name;
            contacts.insert(name);

        } else {
            cin >> partial;
            int count = 0;

            for (std::set<std::string>::const_iterator it(contacts.lower_bound(partial));
                    it != contacts.end() && it->find(partial) == 0; ++it) {
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
