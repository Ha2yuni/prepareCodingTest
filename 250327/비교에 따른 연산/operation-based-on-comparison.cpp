#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int iA(0), iB(0);

    cin >> iA >> iB;

    if (iA > iB) 
        cout << iA * iB;
    else 
        cout << iB / iA;
    return 0;
}