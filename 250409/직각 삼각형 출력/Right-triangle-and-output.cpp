#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num(0);

    cin >> num;

    for (int i=0; i < num; i++) {
        for (int k=0; k < (i*2+1); k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}