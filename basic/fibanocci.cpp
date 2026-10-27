#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a numbers of terms: ";
    cin >> n;

    int a = 0, b = 1, nextTerm;

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}