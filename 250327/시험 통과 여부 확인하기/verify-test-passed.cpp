#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int iNum(0);

    cin >> iNum;

    if (iNum >= 80) {
        cout << "pass";
    } else {
        cout << 80 - iNum << " more score";
    }

    return 0;
}