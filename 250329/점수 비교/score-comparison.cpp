#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int mathA(0), engA(0);
    int mathB(0), engB(0);

    cin >> mathA >> engA >> mathB >> engB;

    if ((mathA > mathB) && (engA > engB))
        cout << 1;
    else
        cout << 0;
    
    return 0;
}