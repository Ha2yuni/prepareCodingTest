#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num[11] = {0};
    
    for (int i=0; i < 2; i++) {
        cin >> num[i];
        cout << num[i] << " ";
    }

    for (int k=2; k < 10; k++) {
        num[k] = (num[k-1] + num[k-2]);
        if (num[k] >= 10)
            cout << num[k] % 10 << " ";
        else
            cout << num[k] << " ";
    }

    return 0;
}