#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n(0), m(0);
    int arr1[10][10], arr2[10][10];
    
    cin >> n >> m;

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++)
            cin >> arr1[i][j];
    }

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++)
            cin >> arr2[i][j];
    }

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            if (arr1[i][j] == arr2[i][j])
                cout << false << " ";
            else
                cout << true << " ";
        }
        cout << endl;
    }
    return 0;
}