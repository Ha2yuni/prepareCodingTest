#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int iWater(0);

    cin >> iWater;

    if (iWater < 0)
        cout << "ice";
    else if (iWater >= 100)
        cout << "vapor";
    else 
        cout << "water";
        
    return 0;
}