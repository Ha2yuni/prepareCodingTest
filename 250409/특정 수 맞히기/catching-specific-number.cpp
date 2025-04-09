#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num(0);
    string say = "";

    while (num != 25) {

        cin >> num;
        (num > 25) ? say = "Lower" : say = "Higher";
        if (num != 25)
            cout << say << endl;
    }

    cout << "Good";

    return 0;
}