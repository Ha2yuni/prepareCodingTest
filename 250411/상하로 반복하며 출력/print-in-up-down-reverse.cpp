#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n(0), cnt(1);

    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i=0; i<n; i++) {

        if (i%2==0) {
            for (int j=0; j<n; j++) {
                arr[j][i] = cnt;
                cnt++;
            }
            cnt=n;
        } else {
            for (int j=0; j<n; j++) {
                arr[j][i] = cnt;
                cnt--;
            }
            cnt=1;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}