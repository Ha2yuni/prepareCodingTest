#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A(0), B(0), C(0);
    int biggest(0), smallest(0);

    cin >> A >> B >> C;
    
    biggest = A;
    smallest = A;

    if (biggest < B) {
        biggest = B;
        if (biggest < C)
            biggest = C;
    } else if (biggest < C)
            biggest = C;
        
    if (smallest > B) {
        smallest = B;
        if (smallest > C)
            smallest = C;
    } else if (smallest > C)
            smallest = C;

    if (A != biggest && A != smallest)
        cout << A;
    else if (B != biggest && B != smallest)
        cout << B;
    else
        cout << C;

    return 0;
}