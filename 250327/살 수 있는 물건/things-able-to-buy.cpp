#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int iMoney;

    cin >> iMoney;

    if (iMoney >= 3000)
        cout << "book";
    else if (iMoney >= 1000)
        cout << "mask";
    else
        cout << "no";
    return 0;
}