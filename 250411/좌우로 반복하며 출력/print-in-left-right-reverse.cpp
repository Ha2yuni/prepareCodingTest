#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n(0), cnt(1);

    cin >> n;

    vector<int> arr(n);

    for (int i=0; i<n; i++) {
        // 행마다 값 채움
        for (int j=0; j<n; j++) {
            arr[j]=cnt;
            cnt++;
        }

        if (i%2==0) {
            for (int k=0; k<n; k++)
                cout << arr[k];
        }
        else {
            for (int k=0; k < n; k++)
                cout << arr[n-k-1];
        }



        cout << endl;
        cnt=1;
    }

    return 0;
}