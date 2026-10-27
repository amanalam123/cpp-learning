#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int original = n;
    int sum = 0;
    int count = 0;

    int temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;


        sum += round(pow(digit, count));
       
        temp /= 10;
    }

    if (sum == original) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }
    return 0;
}