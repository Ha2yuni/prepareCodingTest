#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A(0), N(0);

    cin >> A >> N;

    for (int i=0; i < N; i++) {
        A += N;
        cout << A << endl;
    }
        
    return 0;
}