#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int iScore(0);
    char cRank('0');

    cin >> iScore;

    if (iScore >= 90)
        cRank = 'A';
    else if (iScore >= 80)
        cRank = 'B';
    else if (iScore >= 70)
        cRank = 'C';
    else if (iScore >= 60)
        cRank = 'D';
    else
        cRank = 'F';

    cout << cRank;


    return 0;
}