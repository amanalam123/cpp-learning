#include<iostream>
using namespace std;
int main() {
    int n,m, sum=0;
    cout << "Enter two positive integers: ";
    cin >> n >> m;
    for(int i=n; i<=m; i++) {
        sum += i;
    }
    cout << "Sum of numbers from " << n << " to " << m << " is: " << sum << endl;
    return 0;
}