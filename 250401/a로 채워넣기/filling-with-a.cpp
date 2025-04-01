#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string text = "";

    cin >> text;

    text[1] = 'a';
    text[text.length()-2] = 'a';

    cout << text;
    return 0;
}