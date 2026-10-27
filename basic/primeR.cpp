#include<iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter the range: "<< endl;
    cin >> n >> m;
    for (int j = n; j <= m; j++) {
        bool isPrime = true;
        if (j < 2) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= j; i++) {
                if (j % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << j << " ";
        }
    }
    return 0;
}