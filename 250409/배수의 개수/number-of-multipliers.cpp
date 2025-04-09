#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int three(0) , five(0) ,num(0);

    for (int i=1; i <= 10; i++) {
        //cin >> num[i];
        cin >> num;
        if (num % 3 ==0)
            three++;
        if(num % 5==0)
            five++; 
    }
    
    cout << three << " " << five;
    
    return 0;
}