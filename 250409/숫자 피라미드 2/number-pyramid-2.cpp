#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n(0);
    int count(0);

    cin >> n;

    for (int i=1; i <= n; i++) {
        for (int k=0; k < i; k++) {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}