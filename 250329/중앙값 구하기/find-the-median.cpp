#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A(0), B(0), C(0);
    int bigger(0);

    cin >> A >> B >> C;

    if ((A > B) && (A < C))
        cout << A;
    else if ((A < B) && (A > C))
        cout << A;
    else if (((A < B) && (A < C)) && (B < C))
        cout << B;
    else
        cout << C;
        
    return 0;
}