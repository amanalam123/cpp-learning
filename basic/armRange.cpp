#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    for(int n = start; n<=end; n++) {
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
            cout << original << " is an Armstrong number." << endl;
        }
    }
    return 0;
}