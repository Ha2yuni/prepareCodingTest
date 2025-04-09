#include <iostream>

using namespace std;

int start, eend;

int main() {
    cin >> start >> eend;

    // Please write your code here.
    int count(0), totalCount(0);

    for (int i=start; i <= eend; i++) {
        for (int k=1; k <= i; k++) {
            if (i % k == 0)
                count++;
        }
        if (count == 3)
            totalCount++;
        else
            count = 0;

    }
    cout << totalCount;
    return 0;
}
