#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count(0);
    
    cin >> count;
    int num[count] = {0};

    for (int k=0; k < count; k++) {
        cin >> num[k];
    }

    for (int i=0; i < count; i++) {
        if (num[count-i-1] % 2 == 0) {
            cout << num[count-i-1] << " ";
        }
    }

    return 0;
}