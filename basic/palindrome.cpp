#include<iostream>
using namespace std;
int main() {
    int n, reverse = 0;
    cout << "Enter a number: ";
    cin >> n;
    int original=n;
    while(n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (original == reverse) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    
    return 0;
}