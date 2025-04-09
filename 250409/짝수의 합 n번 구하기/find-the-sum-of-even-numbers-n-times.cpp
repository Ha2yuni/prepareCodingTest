#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n(0);
    int a(0), b(0);
    int total(0);

    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> a >> b;
        for (int k=a; k <= b; k++) {
            if (k%2==0)
                total += k;
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}