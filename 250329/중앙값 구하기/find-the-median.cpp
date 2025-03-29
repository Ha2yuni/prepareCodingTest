#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A(0), B(0), C(0);
    int bigger(0);

    cin >> A >> B >> C;

    if (A > B) {
        bigger = A;
        if (bigger > C)
            cout << C;
        else
            cout << bigger;
    } else if (A < B) {
        bigger = B;
        if (bigger > C)
            cout << C;
        else
            cout << bigger;
    }
    return 0;
}