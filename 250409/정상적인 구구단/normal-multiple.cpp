#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num(0);
    cin >> num;
    for (int i=1; i <= num; i++) {
        for (int k=1; k <= num; k++) {
            cout << i << " * " << k << " = " <<  i * k;
            if (k != num)
                cout << ", ";
        }
        cout << endl;
    }
    return 0;
}