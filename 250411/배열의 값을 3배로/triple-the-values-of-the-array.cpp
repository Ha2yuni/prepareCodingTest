#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num[3][3] = { 0 };

    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            cin >> num[i][j];
        }
    }

    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            cout << 3 * num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}