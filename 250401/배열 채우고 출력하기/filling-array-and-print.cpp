#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char Str[10] = {' '};

    for (int i=0; i<sizeof(Str); i++) 
        cin >> Str[i];

    for (int j=sizeof(Str)-1; j >= 0; j--)
        cout << Str[j];
    return 0;
}