#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num(0);
    int count(0);
    cin >> num;

    for (int i=0; i <= num; i++) {
        if (i % 2==0)
            ;
        else if (i % 3==0)
            ;
        else if (i % 5==0)
            ;
        else
            count++;
    }

    cout << count;
    return 0;
}