#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string fruit[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char what = ' ';
    int count(0);

    cin >> what;

    for (int i=0; i < 5; i++) {
        if (fruit[i][2] == what || fruit[i][3] == what) {
            cout << fruit[i] << endl;
            count++;
        }
    }

    cout << count;

    return 0;
}