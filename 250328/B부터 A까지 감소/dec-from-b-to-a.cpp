#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A(0), B(0);

    cin >> A >> B;

    for (int i=B; A <= i; i--)
        cout << i << " ";
    return 0;
}