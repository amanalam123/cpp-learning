#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPerfectSquare = false;
    for(int i=1; i*i<=n; i++) {
        if(i*i == n) {
            isPerfectSquare = true;
            break;
        }
    }
    if(isPerfectSquare) {
        cout << n << " is a perfect square." << endl;
    } else {
        cout << n << " is not a perfect square." << endl;
    }
    return 0;
}