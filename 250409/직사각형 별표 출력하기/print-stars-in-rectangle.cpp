#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int row(0), column(0);

    cin >> row >> column;

    for (int i=0; i < row; i++) {
        for (int k=0; k < column; k++) {
            cout << "*" << " ";
        }
        cout << endl;
    }


    return 0;
}