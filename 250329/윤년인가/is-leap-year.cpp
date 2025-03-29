#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Y(0);

    cin >> Y;

    if (Y%4==0 && !(Y%100==0 && Y%400!=0))
        cout << "true";
    else
        cout << "false";
        
    return 0;
}