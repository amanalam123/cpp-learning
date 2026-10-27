#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int a=0, b=1, nextTerm;
    if (n==1) {
        cout << "Nth term = "<<a;
    }
    else if (n==2) {
        cout << "Nth term = "<<b;
    }
    else {
        for (int i=3; i<=n; i++) {
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        cout << "Nth term = "<<nextTerm;
    }
    return 0;
}