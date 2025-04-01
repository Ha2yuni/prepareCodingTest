#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int n(0);
    int n_squared[101] = {0};

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> n_squared[i];
        n_squared[i] = pow(n_squared[i], 2);
        cout << n_squared[i] << " ";
    }
    return 0;
}